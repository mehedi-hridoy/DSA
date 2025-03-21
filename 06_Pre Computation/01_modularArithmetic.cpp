/*
Given a Number N . Print it's factorial.
Constrains 1 <= N <= 100

print answer module M 
where M = 47(because the answer's overflows)

sometimes you find M = 10 ^ 9 + 7 (very close to integer)
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int M = 47;

    long long fact = 1;
    for(int i = 2; i <= n; ++i) {
        // fact = fact * i;
        fact = (fact * i) % M;

    }
    cout << fact;

}