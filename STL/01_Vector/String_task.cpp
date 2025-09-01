// codeforces 118 A string Task
#include<bits/stdc++.h>
using namespace std;
#define fast_io() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast_io();
    string str;
    cin >> str;

    for(int i = 0; i < str.size(); i++) {
        str[i] = tolower(str[i]);
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y') {
            continue;
        } else {
            cout << "." << str[i];
        }
    }

    return 0;
}