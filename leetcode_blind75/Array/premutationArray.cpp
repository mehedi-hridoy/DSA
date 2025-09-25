// permutation array leetcode 1920
#include<bits/stdc++.h>
using namespace std;

vector<int> buildArray(vector<int> & nums) {
    int n = nums.size();
    vector<int> ans(n);
    for(int i = 0; i < nums.size(); i ++) {
        ans[i] = nums[nums[i]];
    }

    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n; i ++) {
        cin >> v[i];
    }

    vector<int> ans(n);

    ans = buildArray(v);

    for(int i = 0; i < ans.size();i++) {
        cout << ans[i] << " ";
    }
}