    #include <iostream>
    #include <string>

    using namespace std;

    int findDigits(int x){
        string str = to_string(x);
        int digit, num = 0;
        for(int i = 0; i < str.size(); i++) {
            digit = (str[i] - '0');
            if (digit == 0) continue;
            else if (x % digit == 0) num++;
        }
        return num;
    }

    int main(){
        int test_case, n; 
        cin >> test_case;
        for(int i = 1; i <= test_case; i++) {
            cin >> n;
            cout << findDigits(n) << '\n';
        }
    }