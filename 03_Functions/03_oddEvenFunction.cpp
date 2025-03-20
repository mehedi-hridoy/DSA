// Odd even Function 
#include<bits/stdc++.h>
using namespace std;
void oddEven(int n) {
    if(n%2 == 0) {
        cout << n << " is even." << endl;
    } else {
        cout << n << " is odd." << endl;
    }
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    oddEven(num);
    return 0;
}