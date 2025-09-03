#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> marks;
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        marks.push_back(x);
    }

    for(auto &x: marks) {
        x = x + 5;
    }

    for(auto x: marks) {
        cout << x << " ";
    }
    cout << endl;
}