// basics of  vector in c++
#include<bits/stdc++.h>
using namespace std;

int main() {
    // declaration of vector
    vector<int> v;
    vector<int> v2(5, 10); // 5 size and all value is 10
    vector<int> v3{1, 2, 3, 4, 5};
    v.push_back(3); // 3
    v.push_back(5); // 3 5
    v.push_back(7); // 3 5 7


    // basic operation 
    v.push_back(10); // 3 5 7 10 add element at the end
    v.emplace_back(12); // 3 5 7 10 12 faster than push_back


    // accessing elements
    cout << v[0] << endl; // 3 at index 0
    cout << v.at(2) << endl; // 7 at index 2
    cout << v.front() << endl; // 3 at index 0
    cout << v.back() << endl; // 12 at index 4

    // removing elements
    v.pop_back(); // 3 5 7 10 remove last element

    vector<int> v4 = {1, 2, 3, 4, 5,2, 3 , 2 , 7, 2 , 11, 2}; // remove all 2 from here
    v.erase(remove(v.begin(), v.end(), 2), v.end()); // 1 3 4 5 3 7 11

    // remove elements from a speicific index
    v.erase(v.begin() + 2); // remove element at index 2

    // add elements
    v.push_back(5); 
    v.insert(v.begin() + 1, 4); // add 4 at index 1

    // size and capacity
    cout << v.size() << endl; // 7
    cout << v.capacity() << endl; // 8

    // iterating 
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    for(auto x: v) {
        cout << x << " ";
    }

    for(auto x: v) // it gives you elements not index
    // gives you the copy of each element , modifying x will not change the original vector

    for(auto &x: v) // it gives you reference of each element , modifying x will change the original vector

    // insert and erase
    v.insert(v.begin() + 2, 15); // insert 15 at index 2

    v.insert(v.begin() + 2, 3, 50); // insert 3 elements with value 50 at index 2
    
    // swap
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {6, 7, 8, 9, 10};
    swap(a, b); // swap a and b

    vector<int> c(1e7, 1); // vector of size 1e7, all elements are 1
    vector<int> d(1e7, 2); // vector of size 1e7, all elements are 2
    c.swap(d); // swap c and d

    // even bigger numbers can be swapped

}