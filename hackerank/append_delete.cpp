// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     string s, t;
//     int k, pos;
//     getline(cin, s);
//     getline(cin, t);
//     cin >> k;
//     if (s == t) {
//         cout << "Yes";
//         return 0;
//     } 
//     if (s.size() + t.size() <= k) {
//         cout << "Yes";
//         return 0;
//     }
//     for(int i = 0; i <= s.size(); i++) {
//         if (s[i] != t[i]) {
//             pos = i; 
//             break;
//         }
//     }
//     int move = s.size() - pos + t.size() - pos; 
//     if (pos == 0) {
//         if (move <= k) cout << "Yes";
//         else cout << "No";
//     } else {
//         if (move > k) cout << "No";
//         if (move == k) cout << "Yes";
//         if (move < k) {
//             if ((k - move) % 2 == 0) cout << "Yes";
//             else cout << "No";
//         }
//     }
// }

#include<iostream>

using namespace std;

int main(){
    int n;
    string s, t;
    cin >> s >> t>> n;
    int pos = 0;
    while (pos < min(s.size(), t.size()) && s[pos] == t[pos]) pos ++;
    if (k%2 == (s.size() + t.size()) %2) move = s.size() + t.size() - 2*pos
    else move = s.size() + t.size() + 1;
    if (move <= k) cout << "Yes" ;
    else cout << "No";
}