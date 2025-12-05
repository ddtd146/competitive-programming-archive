#include<iostream> 
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,x;
    cin >> n;
    vector<int> vec;
    for(int i = 1; i <= n; i++){
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
}