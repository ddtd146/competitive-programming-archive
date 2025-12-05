// #include<bits/stdc++.h>
// #define N 100007

// typedef long long ll;
// using namespace std;

// ll gcd(ll a, ll b){
//     return b == 0 ? a : gcd(b, a % b);   
// }

// ll lcm(ll a, ll b){
//     return a*b / gcd(a, b);
// }
// int main(){
//     int n;
//     ll a[N];
//     ll pre[N], suf[N], d[N];
//     cin >> n;
//     for (ll i = 1; i <= n; ++i) cin >> a[i];
//     pre[1] = a[1];
//     suf[n] = a[n];
//     for (int i = 2; i < n; ++i) pre[i] = gcd(pre[i-1], a[i]);
//     for (int i = n-1; i > 0; --i) suf[i] = gcd(suf[i+1], a[i]);
//     for (int i = 2; i < n; ++i)  d[i] = gcd(pre[i-1], suf[i+1]);
//     d[1] = suf[2];
//     d[n] = pre[n-1];
//     ll res = 1;
//     for(int i = 1; i <= n; ++i) 
//         res = lcm(res, d[i]);
//     cout << res;
// }

#include<bits/stdc++.h>
#define N 100
using namespace std;

bool isPrime[200000+7];

void sieve(int n) {
    
    for(int i = 0; i <= n;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= n; ++i) {
         if(isPrime[i] == true) {
             for(int j = i * i; j <= n; j += i)
                 isPrime[j] = false;
        }
    }
}

int main(){
    int n;
    int a[N];
    cin >> n;
    int v = 0;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        v = max (v, a[i]);
    }
    sieve(v); 
    vector <int> list;
    for(int i = 2; i <= v; ++i) 
        if (isPrime[i]) list.push_back(i);
    cout << list.size();
    // for(auto itr : list) {
    //     int cnt = 0;
    //     int d[n+7] = {0};
    //     for (int i = 1 ;  i <= n; ++i)
    //         if (a[i] % *itr == 0) ++cnt;
    //     if (cnt <= n - 2) continue;
    //     for (int i = 1; i <= n; ++i)
    //         while(a[i] % *itr == 0) ++d[i];
        
    // } 
}