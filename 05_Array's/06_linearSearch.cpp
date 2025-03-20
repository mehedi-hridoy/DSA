// Linear Search 
#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int index = linearSearch(arr, n, key);
    if(index == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << index << endl;
    }

    return 0;
}
