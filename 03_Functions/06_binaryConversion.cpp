// Decimal To Binary Conversion
// This program converts a decimal number to binary number
#include<bits/stdc++.h>
using namespace std;
int binToDec(int binNum) {
    int n = binNum;
    int decNum = 0;
    int pow = 1; // 2^0  2^1  2^2  2^3  2^4  2^5

    while(n >  0) {
        int lastDigit = n % 10;
        decNum += lastDigit * pow;
        pow = pow * 2;
        n = n / 10;
    }
}

int main() {
    int binNum;
    cout << "Enter a binary number: ";
    cin >> binNum;
    cout << "Decimal Number: " << binToDec(binNum) << endl;
    return 0;
}