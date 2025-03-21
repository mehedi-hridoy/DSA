#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"

void two_sum_cf_hashmap(int n, int x, vector<int>& arr) {
    map<int, int> mpp; 
    for (int i = 0; i < n; i++) {
        int moreNeeded = x - arr[i];
        if (mpp.find(moreNeeded) != mpp.end()) {
            cout << mpp[moreNeeded] + 1 << " " << i + 1 << nl; 
            return;
        }
        mpp[arr[i]] = i; 
    }
    cout << -1 << nl; 
}

int main() {
    fast_io();

    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    two_sum_cf_hashmap(n, x, arr);

    return 0;
}
