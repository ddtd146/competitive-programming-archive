#include<iostream>

using namespace std;

// void swap(int &a, int &b){
//     int temp = a; // temporary
//     a = b;
//     b = temp;
// }

// void bubbleSort(int arr[], int len){
//     for (int i = 1; i < len ; i++){
//         for (int j = 1; j < len - i; j++){
//             if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
//         }
//     }
// }

int main(){
    int budget, n, m;
    int keyboards[1000+7], drives[1000+7], prices[1007*1007] = {0};
    cin >> budget >> n >> m;
    for (int i = 1; i <= n; i++) {cin >> keyboards[i];}
    for (int i = 1; i <= m; i++){cin >> drives[i];}
    int count = 0;
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++){
            count ++;
            prices[count] = prices[count] + keyboards[i] + drives[j];        
        }
    }
    count = 0;
    for (int i = 1; i <= n*m; i++) {
        if (prices[i] <= budget && prices[i] > count) count = prices[i] ;      
    }
    if (count !=0) cout << count;
    else cout << -1;
    return 0;
}

  //bubbleSort(prices, n * m);  
    // cant sort cuz O(n^2 * m^2) = O(1000^2*1000^2)
    //for (int i = 1; i <= m*n; i++) cout << prices[i] << " ";
    // for (int i = 1; i <= n + m; i++) {
    //     if (prices[i] > budget && i != 1) {
    //         cout << prices[i - 1];
    //         affordable = true;
    //         break;
    //     }
    // }
    // if (!affordable) cout << "-1";