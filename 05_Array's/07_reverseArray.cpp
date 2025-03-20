#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int arr2[], int n) {
    // Copy elements from arr to arr2 in reverse order
    for (int i = 0; i < n; i++) {
        arr2[i] = arr[n - i - 1];
    }
    
    // Copy elements from arr2 back to arr
    for (int i = 0; i < n; i++) {
        arr[i] = arr2[i];
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    int arr2[n]; // Second array to hold the reversed elements
    
    // Input the original array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, arr2, n);
    
    // Output the reversed array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
