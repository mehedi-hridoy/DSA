// Minimum in rotated Sorted Array
#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
int findMin(vector<int>& nums) {
    int m = 0;
    for(int i = 0; i < nums.size()-1; i++) {
        if(nums[i] > nums[i+1]) {
            return nums[i+1];
            break;
        } 
        m = nums[i];
    }
    return nums[0];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int ans = findMin(nums);
    cout << ans << nl;

}