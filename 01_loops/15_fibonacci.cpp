// Fibonacci Numbers
// Fibonacci numbers are a series of numbers in which each number is the sum of the two preceding ones, usually starting with 0 and 1.
#include<bits/stdc++.h> 
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for(int i = 2; i < n; i++) {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}