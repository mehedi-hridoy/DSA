// basics of sets
// ordered set
#include <iostream>
#include <set>
using namespace std;
int main() {
    // declaration styles
    set<int> s; // empty set
    set<int> s2 = {1, 2, 3, 4, 5}; // initializer list
    set<int> s3(s2); // copy constructor
    set<int> s4(s2.begin(), s2.end()); // range constructor

    // insertion
    s.insert(10);
    s.insert(20);
    s.insert(10); // duplicate, will be ignored

    // traversal
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " "; // 10 20
    }
    cout << endl;

    // iterator
    set<int>::iterator it = s.begin();
    cout << *it << endl; // 10

    // size
    cout << "Size of s: " << s.size() << endl; // 2
    cout << "Is s empty? " << (s.empty() ? "Yes" : "No") << endl; // No
    cout << "Max size of s: " << s.max_size() << endl;

    // find and erase
    it = s.find(20);
    if (it != s.end()) {
        cout << "Found: " << *it << endl; // Found: 20
        s.erase(it); // removes 20
    }
    cout << "Size of s after erase: " << s.size() << endl; // 1

    // clear
    s.clear();
    cout << "Size of s after clear: " << s.size() << endl; // 0

    // what happens if we try to access elements like in vector or list
    // cout << s[0]; // error: no operator[] in set
    // cout << s.at(0); // error: no at() in set

    // how does data stores in set 
    // it's not like contiguous memory allocation
    // it uses self balancing binary search tree internally (like AVL or Red-Black Tree)
    // it has nodes and each node has left and right child
    // left child has value less than parent node and right child has value greater than parent node
    // this ensures that the elements are always sorted
    // and allows for efficient insertion, deletion, and lookup

    // functions
    s2.insert(3); // duplicate, will be ignored
    s2.insert(6);
    for (int x : s2) {
        cout << x << " "; // 1 2 3 4 5 6
    }
    cout << endl;
    cout << "Count of 3 in s2: " << s2.count(3) << endl; // 1
    cout << "Count of 10 in s2: " << s2.count(10) << endl; // 0
    s2.erase(3); // removes 3
    for (int x : s2) {
        cout << x << " "; // 1 2 4 5 6
    }
    cout << endl;

    // is set sorted or not
    set<int> unsorted = {5, 3, 8, 1, 4};
    for (int x : unsorted) {
        cout << x << " "; // 1 3 4 5 8
    }
    cout << endl;


    return 0;
}