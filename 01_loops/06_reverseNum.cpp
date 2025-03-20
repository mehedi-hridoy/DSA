// Print the sum of digits of a number using while loop 
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int num, reversed =  0;
    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        int digit = num % 10 ;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    cout << "Reversed Number is : " << reversed << endl;
    return 0;
}

/*
n = 12345
reversed = reversed * 10 + digit 

0 = 0 * 10 + 5
5 = 5 * 10 + 4
54 = 54 * 10 + 3
543 = 543 *  10 + 2
5432 = 5432 * 10 + 1
54321 -- > reversed solution 
*/