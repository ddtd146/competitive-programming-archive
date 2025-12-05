#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, x, d, a, b;
    cin >> n;
    vector<int> vec;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        vec.push_back(x);
    }
    cin >> d >> a >> b;
    vec.erase(vec.begin() + d - 1);
    vec.erase(vec.begin() + a - 1, vec.begin() + b - 1);
    cout << vec.size() << "\n";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    return 0;
}

// erasing from vector
// #include <iostream>
// #include <vector>
// int x;
// int main ()
// {
//   std::vector<int> myvector;

//   // set some values (from 1 to 10)
//   for (int i=1; i<=10; i++) {
//     std::cin >> x;  
//     myvector.push_back(x);
// }

//   // erase the 6th element
//   myvector.erase (myvector.begin()+5);

//   // erase the first 3 elements:
//   myvector.erase (myvector.begin(),myvector.begin()+3);

//   std::cout << "myvector contains:";
//   for (unsigned i=0; i<myvector.size(); ++i)
//     std::cout << ' ' << myvector[i];
//   std::cout << '\n';

//   return 0;
// }