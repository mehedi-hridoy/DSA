#include<bits/stdc++.h>
using namespace std;
#define fast_io(); ios_base::sync_with_stdio(false);cin.tie(nullptr);

// solve O(n^2)
bool contains_duplicate(vector<int>& nums) {
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1 ; j < nums.size(); j++) {
            if(nums[i] == nums[j]) {
                return true;
                break;
            }
        }
    }

    return false;
}

bool contains_duplicate_optimized(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    for(int i = 0; i < nums.size() - 1; i++) {
        if(nums[i] == nums[i+1]) {
            return true;
            break;
        }
    }
    return false;
}

int main() {
    fast_io();
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // int ans = contains_duplicate(nums);
    int ans = contains_duplicate_optimized(nums);
    if(ans) cout << "Yes";
    else cout << "No";
}