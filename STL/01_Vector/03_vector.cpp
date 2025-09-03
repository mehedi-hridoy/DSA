#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {5,2,3,1,4,7,5,7,1};

    // algo in vector
    sort(v.begin(), v.end());
    for(auto x: v) cout << x << " "; // 1 1 2 3 4 5 5 7 7 
    cout << endl;


    reverse(v.begin(), v.end());
    for(auto x: v) cout << x << " "; // 7 7 5 5 4 3 2 1 1
    cout << endl;

    
    random_shuffle(v.begin(), v.end());
    for(auto x: v) cout << x << " "; // Random order

    cout << endl;
    // unique
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
    for(auto x: v) cout << x << " "; // 1 2 3 4 5 7

    // sort --> O(n log n)
    //reverse ,find --> O(n)

}