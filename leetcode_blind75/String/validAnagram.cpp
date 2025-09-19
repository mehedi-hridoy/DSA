// valid anagram leetcode 242
#include<bits/stdc++.h>
using namespace std;

// basic version 
bool validAnagram(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}


// optimized
 bool isAnagram(string s, string t) {
         if(s.size() != t.size()) {
            return false;
         }

         int freq[26] = {0};

         for(int i = 0 ; i < s.size(); i ++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
         }

        for(int i =0; i < 26; i++) {
            if(freq[i] != 0) {
                return false;
            }
        }

        return true;

        
}

int main() {

    string s,t;
    cin >> s >> t; 
    // bool ans = validAnagram(s,t);
    bool ans = isAnagram(s,t);
    if(ans) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}