// Print Number's Upto N in a reverse Order
//Print Numbers From 1 to N 
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i = n; i > 0 ; i--) {
        cout << i << " ";
    }
    return 0;
}