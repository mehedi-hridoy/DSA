// longest substring with consecutive character leetcode 3
#include<bits/stdc++.h>
using namespace std;

// longest Substring brute force solution 
int longestSubstring(string s) {
    int maxLen = 0;
    for(int i = 0; i < s.size(); i++) {
        bool hash[256] = {false};  
        for(int j = i; j < s.size(); j++) {
            if (hash[s[j]]) {  
                break;  
            }
            hash[s[j]] = true;  
            int len = j - i + 1;
            maxLen = max(len, maxLen);
        }
    }
    return maxLen;
}


// two pointer approach (optimized)
int longestSubstringOptimized(string s) {
    
    vector<int> last(256, -1);
    int left = 0;   
    int best = 0;   

    for (int right = 0; right < (int)s.size(); ++right) {
        unsigned char ch = s[right];
        if (last[ch] >= left) {
            left = last[ch] + 1;
        }
        last[ch] = right; 
        best = max(best, right - left + 1);
    }

    return best;
}

int main() {

    string s;
    cin >> s;

    int ans = longestSubstring(s);
    
    cout << ans << endl;


}