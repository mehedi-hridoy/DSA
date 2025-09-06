// unordered map in C++
#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    // declaration styles
    unordered_map<int, string> um; // empty unordered map
    unordered_map<int, string> um2 = {{1, "one"}, {2, "two"}, {3, "three"}}; // initializer list
    unordered_map<int, string> um3(um2); // copy constructor
    unordered_map<int, string> um4(um2.begin(), um2.end()); // range constructor

    // insertion
    um.insert({4, "four"});
    um[5] = "five"; // another way to insert

    // traversal
    for (const auto& pair : um) {
        cout << pair.first << ": " << pair.second << endl; // order may vary
    }

    // iterator
    unordered_map<int, string>::iterator it = um.begin();
    cout << it->first << ": " << it->second << endl; // could be any key-value pair

    // size
    cout << "Size of um: " << um.size() << endl;
    cout << "Is um empty? " << (um.empty() ? "Yes" : "No") << endl;
    cout << "Max size of um: " << um.max_size() << endl;

    // find and erase
    it = um.find(2);
    if (it != um.end()) {
        cout << "Found: " << it->first << ": " << it->second << endl;
        um.erase(it);
    }
    cout << "Size of um after erase: " << um.size() << endl;

    // clear
    um.clear();
    cout << "Size of um after clear: " << um.size() << endl;

    // unordered_map stores key-value pairs in no particular order
    um2[3] = "THREE"; // update value for key 3
    um2[6] = "six"; // insert new key-value pair
    for (const auto& pair : um2) {
        cout << pair.first << ": " << pair.second << endl; // order may vary
    }

    // time complexity
    // average O(1) time complexity for insertion, deletion, and lookup
    // worst case O(n) time complexity occurs when many keys hash to the same bucket

    // unordered_map allows unique keys in no particular order
    // if we try to insert
    // a duplicate key, the value will be updated
        // for example, inserting key 3 again
    um2.insert({3, "Three"}); // this will not insert a new key, but update the value
    for (const auto& pair : um2) {  
        cout << pair.first << ": " << pair.second << endl; // order may vary
    }   
    return 0;
}