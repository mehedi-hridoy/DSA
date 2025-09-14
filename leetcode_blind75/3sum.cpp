// 3 sum problem leetcode
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> & nums) {
    int n = nums.size();
    vector<vector<int>> ans;
    set<vector<int>> s; // set to store unique triplets
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    sort(trip.begin(), trip.end());
                    if(s.find(trip) == s.end()) {
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> result = threeSum(v);
    
    for(int i = 0; i < result.size(); i++) {
        for(int j = 0; j < result[i].size(); j++) {
            cout << result[i][j];
            if(j < result[i].size() - 1) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}