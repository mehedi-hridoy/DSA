// Must Read Notes:
// Pass by Value(Call by Value): The value of the actual parameter is passed to the function.
// Pass by Reference(Call by Reference): The address of the actual parameter is passed to the function.
// Pass by Pointer(Similar to Pass by Reference)
// Pass by Const Reference: The address of the actual parameter is passed to the function, and the value of the actual parameter cannot be changed.

#include <iostream>
using namespace std;
void byValue(int x) {
    x = 100;
    cout << "Inside byValue: " << x << endl;
}

void byReference(int &x) {
    x = 200;
    cout << "Inside byReference: " << x << endl;
}

void byPointer(int *x) {
    *x = 300;
    cout << "Inside byPointer: " << *x << endl;
}

void byConstReference(const int &x) {
    // x = 400;  // Error: Cannot modify const reference
    cout << "Inside byConstReference: " << x << endl;
}

int main() {
    int num = 5;

    byValue(num);
    cout << "After byValue: " << num << endl;

    byReference(num);
    cout << "After byReference: " << num << endl;

    byPointer(&num);
    cout << "After byPointer: " << num << endl;

    byConstReference(num);
    cout << "After byConstReference: " << num << endl;

    return 0;
}