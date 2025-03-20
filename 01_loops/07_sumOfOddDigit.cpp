// Find the sum of digits of odd numbers
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,digitSum = 0;
    cin >> n;

    while(n != 0) {
        int lastDigit = n % 10;
        if(lastDigit %2 != 0) {
            digitSum = digitSum + lastDigit;
        }

        n /= 10;

    }

    cout << "Sum of odd digits : "<< digitSum << '\n';
    return 0;
}