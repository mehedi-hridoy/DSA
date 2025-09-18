// longest repeating character 424 leetcode 
#include<bits/stdc++.h>
using namespace std;

// brute force solution 
int characterReplacement(string s,int k) {
    int n = (int)s.size();
    int ans = 0;
    
    for (int i = 0; i < n; ++i) {
        int freq[26] = {0};
        int maxFreq = 0; 
        for (int j = i; j < n; ++j) {
            int idx = s[j] - 'A';
            ++freq[idx];
            maxFreq = max(maxFreq, freq[idx]);

            int len = j - i + 1;
            int need = len - maxFreq; 
            if (need <= k) ans = max(ans, len);
        }
    }
    return ans;
}

int charReplacementOptimized(string s,int k) {
   
    int cnt[26] = {0};
    int left = 0;
    int best = 0;
    int maxFreq = 0; 

    for (int right = 0; right < (int)s.size(); ++right) {
        int r = s[right] - 'A';
        maxFreq = max(maxFreq, ++cnt[r]);

        
        while ((right - left + 1) - maxFreq > k) {
            int l = s[left] - 'A';
            --cnt[l];
            ++left;
            
        }

        best = max(best, right - left + 1);
    }
    return best;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int k;
    // Expect input like: ABAB 2
    if (!(cin >> s >> k)) return 0;
    cout << charReplacementOptimized(s, k) << '\n';
}