// Maximum Sub array sum slightly optimized
#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int arr[],int n) {
    int maxSum = INT_MIN;
    for(int start = 0; start < n; start++) {
        int currSum = 0;
        for(int end = start; end < n; end++) {
            currSum += arr[end];
            maxSum = max(maxSum , currSum);
        }
    }
    
    return maxSum;
     
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = maxSubArraySum(arr,n);
    
    cout << "Maximum sub array sum is : " << ans << endl;
    
}