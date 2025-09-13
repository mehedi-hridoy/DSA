#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach - O(n^3)
int maxProductSubarray(int arr[], int n) {
    int maxProduct = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int product = 1;
            for(int k = i; k <= j; k++) {
                product *= arr[k];
            }
            maxProduct = max(maxProduct, product);
        }
    }
    return maxProduct;
}

// Optimized Approach - O(n^2)
int maxProductSubarrayOptimized(int arr[], int n) {
    int maxProduct = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        int product = 1;
        for(int j = i; j < n; j++) {
            product *= arr[j];
            maxProduct = max(maxProduct, product);
        }
    }
    return maxProduct;
}

// Most Efficient Approach - O(n) using Kadane's algorithm variant
int maxProductSubarrayEfficient(int arr[], int n) {
    int maxProduct = arr[0];
    int maxEndingHere = arr[0];
    int minEndingHere = arr[0];
    
    for(int i = 1; i < n; i++) {
        // If current element is negative, swap max and min
        if(arr[i] < 0) {
            swap(maxEndingHere, minEndingHere);
        }
        
        // Update max and min products ending at current position
        maxEndingHere = max(arr[i], maxEndingHere * arr[i]);
        minEndingHere = min(arr[i], minEndingHere * arr[i]);
        
        // Update global maximum
        maxProduct = max(maxProduct, maxEndingHere);
    }
    
    return maxProduct;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxSubarray = maxProductSubarray(arr,n);
    cout << maxSubarray << endl;

    return 0;

    
}