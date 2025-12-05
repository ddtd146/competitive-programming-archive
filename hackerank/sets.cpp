#include<iostream>
#include<set>

using namespace std;
 
         // using find
// int main(){
//     int q, y, x;
//     set<int> s;
//     set<int>::iterator itr;
//     cin >> q;
//     for (int i = 1; i <= q; i++){
//         cin >> y >> x;
//         if (y == 1) s.insert(x); 
//         if (y == 2) s.erase(x);
//         if (y == 3) {
//             itr = s.find(x);
//             if (itr != s.end()) cout << "Yes\n";
//             else cout << "No\n";
//         }
//     }
// }
        //using count; (return 0 if not present in set)
        //             (return 1 if present in set) 
        )
int main(){
    int q, y, x;
    set<int> s;
    cin >> q;
    for (int i = 1; i<= q; i++){
        cin >> y >> x;
        if (y == 1) s.insert(x);
        if (y == 2) s.erase(x);
        if (y == 3) {
            if (s.count(x) == 1) cout << "Yes\n";
            else cout << "No\n";
        }
    }
}
    