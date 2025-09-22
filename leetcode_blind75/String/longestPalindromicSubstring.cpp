// longest palindromic substring leetcode 5
#include<bits/stdc++.h>
using namespace std;

string longestPalindromiSubstring(string s) {
    if (s.empty()) return "";

    auto expand = [&](int l, int r) {
        while (l >= 0 && r < (int)s.size() && s[l] == s[r]) {
            --l; ++r;
        }
        return pair<int,int>{l+1, r-1};
    };

    int start = 0, end = 0;
    for (int i = 0; i < (int)s.size(); ++i) {
        auto [l1, r1] = expand(i, i);       
        auto [l2, r2] = expand(i, i + 1);   

        if (r1 - l1 > end - start) {
            start = l1; end = r1;
        }
        if (r2 - l2 > end - start) {
            start = l2; end = r2;
        }
    }
    return s.substr(start, end - start + 1);
}
int main() {

    string s;
    cin >> s;

    string ans = longestPalindromiSubstring(s);
    cout << ans << endl;

}