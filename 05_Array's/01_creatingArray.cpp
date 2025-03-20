// Array 
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Array declaration
    int arr[5];
    cout << "without initialization any index: " << arr[0] << endl; // it will print garbage value
    

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << sizeof(arr) << endl; // 20 bytes

    cout << sizeof(arr) / sizeof(arr[0]) << endl; // 5// size of array

    

}