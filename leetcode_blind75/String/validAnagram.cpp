// valid anagram leetcode 242
#include<bits/stdc++.h>
using namespace std;
bool validAnagram(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}
int main() {

    string s,t;
    cin >> s >> t; 
    bool ans = validAnagram(s,t);
    if(ans) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}