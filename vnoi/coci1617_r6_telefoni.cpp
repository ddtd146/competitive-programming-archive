    #include<bits/stdc++.h>

    using namespace std;

    int main() {
        int n, d, x, y;
        cin >> n >> d >> x;
        int res = 0;
        for (int i = 2; i <= n; ++i) {
            cin >> y;
            if (y == 1) {
                if ((i - x) % d == 0) res += (i - x) / d - 1;
                else res += (i - x) / d;
                x = i;
            }
        }
        cout << res;
    }