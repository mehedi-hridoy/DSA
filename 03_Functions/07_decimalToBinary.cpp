// Decimal To Binary Conversion
// This program converts a decimal number to binary number
#include<bits/stdc++.h> 
using namespace std;
int decToBin(int decNum) {
    int n = decNum;
    int binNum = 0;
    int pow = 1; // 2^0  2^1  2^2  2^3  2^4  2^5

    while(n > 0) {
        int lastDigit = n % 2;
        binNum += lastDigit * pow;
        pow = pow * 10;
        n = n / 2;
    }
    return binNum;
}

int main() {
    int decNum;
    cout << "Enter a decimal number: ";
    cin >> decNum;
    cout << "Binary Number: " << decToBin(decNum) << endl;
    return 0;
}