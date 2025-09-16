// 125 Valid Palindrome leetcode 
#include<bits/stdc++.h>
using namespace std;

bool isValidPalindrome(string s) {
    
    string cleaned;
    for (char c : s) {
        if (isalnum(c)) {
            cleaned += tolower(c);
        }
    }
    
    string reversed = cleaned;
    reverse(reversed.begin(), reversed.end());
    
    return cleaned == reversed;
}

int main() {
    string s;
    cin >> s;
    isValidPalindrome(s);
}