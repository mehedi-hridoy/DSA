// Declaration & Defination 
#include<bits/stdc++.h>
using namespace std;
void sum(int a, int b); // Declaration
int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    sum(x, y);
    return 0;
}
void sum(int a, int b) { // Defination
    cout << "Sum: " << a+b << endl;
}