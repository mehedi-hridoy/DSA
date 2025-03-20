// Referencing Story in Array 
#include <iostream>
#include <array>
using namespace std;

void byValue(array<int, 5> arr) {
    arr[0] = 100;
    cout << "Inside byValue: ";
    for (int i : arr) cout << i << " ";
    cout << endl;
}

void byReference(int (&arr)[5]) {
    arr[0] = 200;
    cout << "Inside byReference: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;
}

void byPointer(int *arr, int size) {
    arr[0] = 300;
    cout << "Inside byPointer: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

void byConstReference(const int (&arr)[5]) {
    // arr[0] = 400;  // Error: Cannot modify const reference
    cout << "Inside byConstReference: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    byValue({1, 2, 3, 4, 5});  // Pass by value (using std::array)
    cout << "After byValue: ";
    for (int i : arr) cout << i << " ";
    cout << endl;

    byReference(arr);  // Pass by reference
    cout << "After byReference: ";
    for (int i : arr) cout << i << " ";
    cout << endl;

    byPointer(arr, 5);  // Pass by pointer
    cout << "After byPointer: ";
    for (int i : arr) cout << i << " ";
    cout << endl;

    byConstReference(arr);  // Pass by const reference
    cout << "After byConstReference: ";
    for (int i : arr) cout << i << " ";
    cout << endl;

    return 0;
}