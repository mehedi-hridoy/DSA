// palindromic substring leetcode 647
#include<bits/stdc++.h>
using namespace std;

int countSubstring(string s) {
    auto expand = [&](int l, int r) {
        int cnt = 0;
        while (l >= 0 && r < (int)s.size() && s[l] == s[r]) {
            ++cnt;
            --l; ++r;
        }
        return cnt;
    };

    int n = (int)s.size();
    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += expand(i, i);     
        total += expand(i, i + 1); 
    }
    return total;
}
int main() {
    string s;
    cin >> s;
    cout << countSubstring(s) << '\n';
}