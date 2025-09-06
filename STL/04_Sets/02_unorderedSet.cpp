// unordered set
#include <iostream>
#include <unordered_set>    
using namespace std;
int main() {
    // declaration styles
    unordered_set<int> us; // empty unordered set
    unordered_set<int> us2 = {1, 2, 3, 4, 5}; // initializer list
    unordered_set<int> us3(us2); // copy constructor
    unordered_set<int> us4(us2.begin(), us2.end()); // range constructor

    // insertion
    us.insert(10);
    us.insert(20);
    us.insert(10); // duplicate, will be ignored

    // traversal
    for (auto it = us.begin(); it != us.end(); it++) {
        cout << *it << " "; // 10 20 (order may vary)
    }
    cout << endl;

    // iterator
    unordered_set<int>::iterator it = us.begin();
    cout << *it << endl; // could be 10 or 20

    // size
    cout << "Size of us: " << us.size() << endl; // 2
    cout << "Is us empty? " << (us.empty() ? "Yes" : "No") << endl; // No
    cout << "Max size of us: " << us.max_size() << endl;

    // find and erase
    it = us.find(20);
    if (it != us.end()) {
        cout << "Found: " << *it << endl; // Found: 20
        us.erase(it); // removes 20
    }
    cout << "Size of us after erase: " << us.size() << endl; // 1

    // clear
    us.clear();
    cout << "Size of us after clear: " << us.size() << endl; // 0

    // what happens if we try to access elements like in vector or list
    // cout << us[0]; // error: no operator[] in unordered_set
    // cout << us.at(0); // error: no at() in unordered_set

    // how does data stores in unordered_set 
    // it's not like contiguous memory allocation
    // it uses hash table internally 
    // each element is stored based on its hash value which is computed using a hash function
    // this allows for average O(1) time complexity for insertion, deletion, and lookup

    // functions
    us2.insert(3); // duplicate, will be ignored
    us2.insert(6);
    for (int x : us2) {
        cout << x << " "; // order may vary, e.g., 1 2 3 4 5 6
    }
    cout << endl;
    return 0;
}