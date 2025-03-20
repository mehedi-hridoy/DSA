// Print the sum of digits of a number using while loop 
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n ;
    cin >> n;

    int digitSum = 0;

    while( n != 0) {
        int remainder = n % 10 ;

        digitSum = digitSum + remainder;

        n = n / 10;

    }
    cout  << "Sum of the digits is " << digitSum << '\n';
    return 0;
}