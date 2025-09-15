// 11 container with most water leetcode 
#include<bits/stdc++.h>
using namespace std;


// brute force approach 
// O(n*n)
int maxArea(vector<int>& height) {
    int maxWater = 0; 

    for(int i = 0; i < height.size(); i++) {
        for(int j = i + 1; j < height.size(); j++) {
            int w = j - i;
            int ht = min(height[i], height[j]);
            int currWater = w * ht;

            maxWater = max(maxWater,currWater);
        }
    }

    return maxWater;
}

// optimized
int maxAreaOptimized(vector<int>& height) {
    int maxWater = 0;
    int lp = 0, rp = height.size() - 1;

    while(lp < rp) {
        int w = rp - lp ;
        int ht = min(height[lp] , height[rp]);
        int currWater = w * ht;
        maxWater = max(maxWater, currWater);

        height[lp] < height[rp] ? lp++ : rp--;
    }

    return maxWater;


}

int main() {
    int n; 
    cin >> n;
    vector<int> height(n);
    for(int i = 0; i < n; i++) {
        cin >> height[i];
    }

    int ans = maxArea(height);

    cout << ans << endl;

    return 0; 



}