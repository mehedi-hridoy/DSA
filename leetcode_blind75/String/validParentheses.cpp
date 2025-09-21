// valid parentheses leetcode 20 
#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    
    stack<char> st;
    auto isOpen = [](char c){ return c=='(' || c=='[' || c=='{'; };
    auto matchOf = [](char c){
        if (c==')') return '(';
        if (c==']') return '[';
        return '{'; 
    };

    for (char c : s) {
        if (isOpen(c)) {
            st.push(c);
        } else {
            if (st.empty() || st.top() != matchOf(c)) return false;
            st.pop();
        }
    }
    return st.empty();

}

int main() {
    string s; 
    cin >> s;
    bool ans = isValid(s);
    cout << (ans ? "true" : "false") << endl;
}