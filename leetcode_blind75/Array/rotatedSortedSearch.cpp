// 33. Search in Rotated Sorted Array
// search in rotated sorted array
#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (nums[mid] == target) {
            return mid;
        }
        
        // Check which half is sorted
        if (nums[low] <= nums[mid]) {
            // Left half is sorted
            if (target >= nums[low] && target < nums[mid]) {
                high = mid - 1;  // Target is in left half
            } else {
                low = mid + 1;   // Target is in right half
            }
        } else {
            // Right half is sorted
            if (target > nums[mid] && target <= nums[high]) {
                low = mid + 1;   // Target is in right half
            } else {
                high = mid - 1;  // Target is in left half
            }
        }
    }
    
    return -1;
}

int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> target;
    
    int ans = search(nums, target);
    cout << ans << endl;
    
    return 0;
}