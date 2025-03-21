/*
Given array a of N integers. Given Q quries and in
each query given a number X, print count of that number in array .

Constrains 
1 <= N <= 10 ^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5
*/
#include<bits/stdc++.h>
using namespace std; 
const int N = 1e7 + 10;
int hsh[N];

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        hsh[a[i]]++;

    }
    int q;
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        // int  ct = 0;
        // for(int i = 0; i < n; ++i) {
        //     if(a[i] == x) {
        //         ct++;
        //     }
        // }
        // cout << ct << endl;
        cout << hsh[x] << endl;

    }
    // O(N) + O(Q*N) = O(N^2) = 10 ^10 (so this code will not run because of constrains)
    // We need to find some good solution 
    // at least on 10 ^ 7
}