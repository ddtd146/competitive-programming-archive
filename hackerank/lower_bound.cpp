// using binary search
// #include<iostream>

// using namespace std;

// int n;
// int arr[100000+7];
// int firstIndex[100000+7];

// int binarySearch(int x){
//     int a = 1, b = n;
//     int pos = (n + 1) / 2;
//     while (a < b) {
//         if (arr[pos] < x) {
//             a = pos + 1;
//             pos =(a + b) / 2;
//         }
//         else if (arr[pos] == x) {
//             return firstIndex[pos];
//             break;
//         } else {
//             b = pos;
//             pos = (a + b) /2;
//         }
//     }
//     return a;
// }
// int main(){
//     int val, q, ans;
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         cin >> arr[i];
//         if (arr[i] != arr[i-1]) firstIndex[i] = i;
//         else firstIndex[i] = firstIndex[i-1];
//     }
//     cin >> q;
//     for (int i = 1; i <= q; i++){
//         cin >> val;
//         ans = binarySearch(val);
//         if (arr[ans] == val) {
//             cout << "Yes "< ans << "\n";
//         } else cout << "No " << ans << "\n";
//     }
//     return 0;
// }


// using lower_bound STL

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, q, x, pos;
    vector <int> vec;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        vec.push_back(x);
    }
    cin >> q;
    for (int i = 1; i <= q; i++){
        cin >> x;
        pos = lower_bound (vec.begin(), vec.end(), x) - vec.begin();
        if (vec.at(pos) == x) cout << "Yes ";
        else cout << "No ";
        cout << pos + 1 << "\n"; 
    }
}