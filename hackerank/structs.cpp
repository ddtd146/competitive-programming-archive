#include<iostream>
#include<string>
using namespace std;

struct Student{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main (){
    Student people;
    cin >> people.age;
    cin.ignore(32767, '\n');
    getline(cin, people.first_name);
    getline(cin, people.last_name);
    cin >> people.standard;
    cout << people.age << " " << people.first_name << " " << people.last_name << " " << people.standard;
}