#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    bool isPrime = true;

    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }

    // if(isPrime) {
    //     cout << n << " is a prime number" << endl;
    // } else {
    //     cout << n << " is not a prime number" << endl;
    // }
    cout << (isPrime ? "Prime" : "Not Prime") << endl;
}