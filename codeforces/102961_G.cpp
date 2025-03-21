#include<bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define nl "\n"

void two_sum_cf_bruteForce(int n,int x, vector<int>& arr) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == x) {
                cout << i + 1 << " " << j + 1 << nl ;
                return;
            }
        }
    }
    cout << -1 << nl;
}

int main() {
    fast_io();

    int n,x;
    cin >> n >> x;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    two_sum_cf_bruteForce(n,x,arr);

    return 0;
}