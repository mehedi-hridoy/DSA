//Finding Factorial of a number
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int factorial = 1;

    for(int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    cout << "Factorial of " << n << " is " << factorial << endl;
    return 0;
}