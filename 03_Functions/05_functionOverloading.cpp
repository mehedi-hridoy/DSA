// Function Overloading 
#include<bits/stdc++.h>
using namespace std;
int sum(int a, int b) {
    return a+b;
}
int sum(int a, int b, int c) {
    return a+b+c;
}
double sum(double a, double b) {
    return a+b;
}
int main() {
    cout << "Sum of 2 and 3: " << sum(2, 3) << endl;
    cout << "Sum of 2, 3 and 4: " << sum(2, 3, 4) << endl;
    cout << "Sum of 2.5 and 3.5: " << sum(2.5, 3.5) << endl;
    return 0;
}