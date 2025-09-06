// maps
#include <iostream>
#include <map>
using namespace std;

int main() {
    // declaration styles
    map<int, string> m; // empty map
    map<int, string> m2 = {{1, "one"}, {2, "two"}, {3, "three"}}; // initializer list
    map<int, string> m3(m2); // copy constructor
    map<int, string> m4(m2.begin(), m2.end()); // range constructor

    // insertion
    m.insert({4, "four"});
    m[5] = "five"; // another way to insert

    // traversal
    for (const auto& pair : m) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // iterator
    map<int, string>::iterator it = m.begin();
    cout << it->first << ": " << it->second << endl;

    // size
    cout << "Size of m: " << m.size() << endl;
    cout << "Is m empty? " << (m.empty() ? "Yes" : "No") << endl;
    cout << "Max size of m: " << m.max_size() << endl;

    // find and erase
    it = m.find(2);
    if (it != m.end()) {
        cout << "Found: " << it->first << ": " << it->second << endl;
        m.erase(it);
    }
    cout << "Size of m after erase: " << m.size() << endl;

    // clear
    m.clear();
    cout << "Size of m after clear: " << m.size() << endl;

    // map stores key-value pairs in sorted order based on keys
    m2[3] = "THREE"; // update value for key 3
    m2[6] = "six"; // insert new key-value pair
    for (const auto& pair : m2) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // time complexity
    // insertion, deletion, and lookup operations have O(log n) time complexity
    // because map is implemented as a self-balancing binary search tree (like Red-Black Tree)

    // map stores unique keys in sorted order
    // if we try to insert a duplicate key, the value will be updated
        // for example, inserting key 3 again
    m2.insert({3, "Three"}); // this will not insert a new key, but update the value
    for (const auto& pair : m2) {
        cout << pair.first << ": " << pair.second << endl;
    }
    

    return 0;
}