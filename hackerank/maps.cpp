#include<iostream> 
#include<map>
#include<string>

using namespace std;

int main(){
    map<string, int> m;
    int q, type, marks;
    string name;
    map<string, int>::iterator itr;
    cin >> q;
    for (int i = 1; i <= q; i++){
        cin >> type ;
        if (type == 1) {
            cin >> name >> marks;
            if (m.count(name)) m[name] += marks; 
            else m.insert(make_pair(name, marks));
        }
        if (type == 2) {
            cin >> name;
            m.erase(name);
        }
        if (type == 3){
            cin >> name;
            if (m.count(name)) cout << m[name] << "\n";
            else cout << 0 <<  "\n";
        }
    }
}