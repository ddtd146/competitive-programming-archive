#include<iostream>
#include<string>

using namespace std;

int main(){
    string word;
    int height[26+7];
    for (int i = 1; i <= 26; i++){
        cin >> height[i];
    }
    cin.ignore(32767, '\n');
    getline(cin, word);
    int maxHeight = 0;
    for (int i = 0; i < word.size(); i++) {
        if (maxHeight < height[word[i] - 96]) maxHeight = height[word[i] - 96];
    }
    cout << maxHeight * word.size();
}