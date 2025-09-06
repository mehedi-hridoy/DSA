// multisets
// ordered multiset
#include <iostream>
#include <set>
using namespace std;
int main() {
    // declaration styles
    multiset<int> ms; // empty multiset
    multiset<int> ms2 = {1, 2, 2, 3, 4, 5}; // initializer list with duplicates
    multiset<int> ms3(ms2); // copy constructor
    multiset<int> ms4(ms2.begin(), ms2.end()); // range constructor

    // insertion
    ms.insert(10);
    ms.insert(20);
    ms.insert(10); // duplicate, will be added

    // traversal
    for (auto it = ms.begin(); it != ms.end(); it++) {
        cout << *it << " "; // 10 10 20
    }
    cout << endl;

    // iterator
    multiset<int>::iterator it = ms.begin();
    cout << *it << endl; // 10

    // size
    cout << "Size of ms: " << ms.size() << endl; // 3
    cout << "Is ms empty? " << (ms.empty() ? "Yes" : "No") << endl; // No
    cout << "Max size of ms: " << ms.max_size() << endl;

    // find and erase
    it = ms.find(10);
    if (it != ms.end()) {
        cout << "Found: " << *it << endl; // Found: 10
        ms.erase(it); // removes one occurrence of 10
    }
    cout << "Size of ms after erase: " << ms.size() << endl; // 2

    // erase all occurrences of a value
    int count = ms.erase(10); // removes all occurrences of 10
    cout << "Number of elements removed: " << count << endl; // 1
    cout << "Size of ms after erasing all 10s: " << ms.size() << endl; // 1

    // clear
    ms.clear();
    cout << "Size of ms after clear: " << ms.size() << endl; // 0

    // what happens if we try to access elements like in vector or list
    // cout << ms[0]; // error: no operator[] in multiset
    // cout << ms.at(0); // error: no at() in multiset

    // how does data stores in multiset
    // it's not like contiguous memory allocation
    // it uses self balancing binary search tree internally (like AVL or Red-Black Tree)
    // it has nodes and each node has left and right child
    // left child has value less than parent node and right child has value greater than parent node
    // this ensures that the elements are always sorted
    // and allows for efficient insertion, deletion, and lookup

    return 0;
}