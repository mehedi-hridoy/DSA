// rotated sorted array 
#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int> & nums) {
    int min_val = INT_MAX;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] < min_val) {
            min_val = nums[i];
        }
    }

    return min_val;
}

int main() {
    int n; 
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i ++ ) cin >> nums[i];


    int ans = findMin(nums);

    cout << ans << endl;
    return 0;
}