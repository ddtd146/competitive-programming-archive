#include<bits/stdc++.h>
#define N 200000+7

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[N];
    multiset<int> b;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= n; ++i){
        int x; 
        cin >> x;
        b.insert(x);
    }
    for(int i = 1; i <= n; ++i) {
        multiset<int>::iterator itr = b.lower_bound(n-a[i]); 
        if (itr == b.end()) itr = b.begin();
        cout << (a[i] + *itr) % n << " ";
        b.erase(itr);
    }
}