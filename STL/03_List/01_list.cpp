// list 
// list is a sequence container that allows non-contiguous memory allocation.
//it's like a doubly linked list
#include<bits/stdc++.h>
using namespace std;
int main() {
    // declaratin styles
    list<int> l;
    list<string> l2 = {"apple", "banana", "cherry"};
    list<int> l3(5, 10); // list of size 5 with all values as 10
    list<int> l4(l3); // copy of l3
    list<int> l5(l3.begin(), l3.end()); // range constructor

    // insertion
    l.push_back(20);
    l.push_front(10);

    // traversal
    for (auto it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // iterator
    list<int>::iterator it = l.begin();
    cout << *it << endl; // 10  

    // size
    cout << "Size of l: " << l.size() << endl; // 2
    cout << "Is l empty? " << (l.empty() ? "Yes" : "No") << endl; // No
    cout << "Max size of l: " << l.max_size() << endl;
    cout << "Front element: " << l.front() << endl; // 10
    cout << "Back element: " << l.back() << endl; // 20
    l.pop_front(); // removes 10
    l.pop_back(); // removes 20
    cout << "Size of l after pop: " << l.size() << endl; // 0

    // clear
    l2.clear();
    cout << "Size of l2 after clear: " << l2.size() << endl; // 0

    // functions
    l3.push_back(30);
    l3.push_front(5);   
    l3.sort(); // sorts the list
    l3.reverse(); // reverses the list
    l3.remove(10); // removes all occurrences of 10
    for (int x : l3) {
        cout << x << " "; // 30 5
    }
    cout << endl;
    l3.unique(); // removes consecutive duplicates
    for (int x : l3) {
        cout << x << " "; // 30 5
    }
    cout << endl;
    return 0;
}