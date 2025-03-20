// Largest Number in the array 
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxNum = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }

    cout << "Largest number in the array is: " << maxNum << endl;
    return 0;
}