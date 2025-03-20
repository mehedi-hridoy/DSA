// Kadan's Algorithm
// Maximum subarray Sum 
// Time Complexity: O(n)
#include<bits/stdc++.h>
using namespace std;

void maxSubarraySum(int arr[], int n) {
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i = 0; i < n; i++) {
        currSum += arr[i];
        if(currSum < 0) {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    maxSubarraySum(arr, n);

    return 0;
}