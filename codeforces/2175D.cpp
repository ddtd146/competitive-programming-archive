#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// Structure to store Pareto optimal states
struct State {
    int index;
    long long penalty;
};

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1);
    // pos[v] stores a sorted list of indices i where a[i] >= v
    vector<vector<int>> pos(k + 1);

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        // We only care about capacities up to k. 
        // If a friend can carry more than k, effectively they can carry k.
        int effective_cap = min(a[i], k);
        for (int v = 1; v <= effective_cap; ++v) {
            pos[v].push_back(i);
        }
    }

    // dp[w][v] stores a list of {index, penalty}
    // w: current total sum of cards
    // v: the value of cards the last friend is carrying
    vector<vector<vector<State>>> dp(k + 1, vector<vector<State>>(k + 1));

    // Base case: 0 weight, 0 last value, index 0, penalty 0
    dp[0][0].push_back({0, 0});

    long long max_happiness = 0;

    for (int w = 1; w <= k; ++w) {
        for (int v = 1; v <= w; ++v) {
            // We want to form a chain ending with value v, total sum w.
            // Previous value must be u < v.
            // Previous weight was w - v.
            
            vector<State> candidates;

            for (int u = 0; u < v; ++u) {
                int prev_w = w - v;
                if (dp[prev_w][u].empty()) continue;

                // Try to extend from previous states
                for (const auto& prev : dp[prev_w][u]) {
                    // Find smallest index > prev.index in pos[v]
                    auto it = upper_bound(pos[v].begin(), pos[v].end(), prev.index);
                    
                    if (it != pos[v].end()) {
                        int curr_idx = *it;
                        long long added_penalty = (long long)curr_idx * (v - u);
                        candidates.push_back({curr_idx, prev.penalty + added_penalty});
                    }
                }
            }

            if (candidates.empty()) continue;

            // Sort candidates by index to filter Pareto optimal ones
            sort(candidates.begin(), candidates.end(), [](const State& a, const State& b) {
                if (a.index != b.index) return a.index < b.index;
                return a.penalty < b.penalty;
            });

            // Filter: Keep {idx, pen} only if for all existing {idx', pen'}, 
            // if idx >= idx', then pen < pen'.
            // Since we sorted by index, we iterate and keep a candidate only if
            // its penalty is strictly less than the minimum penalty seen so far 
            // for "later" indices (conceptually).
            // Actually, simply: A state is dominated if there exists a state with 
            // smaller or equal index and smaller or equal penalty.
            // Since we visit in increasing order of index:
            // We keep a running "best penalty found so far"? No.
            // We want to remove candidates that are worse than what we've seen?
            // If we have (idx1, pen1) and (idx2, pen2) with idx1 < idx2.
            // If pen1 <= pen2, then (idx1, pen1) is strictly better (earlier index, lower/equal cost).
            // So idx2 is dominated.
            // We only keep idx2 if pen2 < pen1.
            
            vector<State>& current_states = dp[w][v];
            long long min_penalty = -1;

            for (const auto& cand : candidates) {
                // If it's the first one, or if penalty is strictly smaller than the last added
                if (current_states.empty()) {
                    current_states.push_back(cand);
                } else {
                    if (cand.penalty < current_states.back().penalty) {
                        current_states.push_back(cand);
                    }
                }
            }

            // Update global max happiness
            for (const auto& s : current_states) {
                long long current_happiness = (long long)(n + 1) * v - s.penalty;
                max_happiness = max(max_happiness, current_happiness);
            }
        }
    }

    cout << max_happiness << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}