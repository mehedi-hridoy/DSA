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
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int k;
    // Expect input like: ABAB 2
    if (!(cin >> s >> k)) return 0;
    cout << characterReplacement(s, k) << '\n';
}