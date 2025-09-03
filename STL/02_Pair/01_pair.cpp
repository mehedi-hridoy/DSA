// basics of pair in stl
#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int, string> p;
    p = make_pair(1, "Hello");
    cout << p.first << " " << p.second << endl;

    pair<int, string> p2 = {2, "World"};
    cout << p2.first << " " << p2.second << endl;

    // declare pair
    pair<float, char> p3 = {3.14, 'A'};
    cout << p3.first << " " << p3.second << endl;

    // access element
    cout << p3.first << " " << p3.second << endl;

    // nested pair
    pair<pair<int, int>, string> p4 = {{{1, 2}, "Point"}, {"Hello", "World"}};
    cout << p4.first.first << " " << p4.first.second << " " << p4.second << endl;

    // array of pairs
    pair<int, string> arr[] = {{1, "One"}, {2, "Two"}, {3, "Three"}};
    for (auto &p : arr) {
        cout << p.first << " " << p.second << endl;
    }

    // vector of pairs
    vector<pair<int, int>> vec = {{1, 2}, {3, 4}, {5, 6}};
    for (auto &p : vec) {
        cout << p.first << " " << p.second << endl;
    }
    
    // comparison of pair
    pair<int, string> p5 = {1, "Hello"};
    pair<int, string> p6 = {2, "World"};
    if (p5 < p6) {
        cout << "p5 is less than p6" << endl;
    } else {
        cout << "p5 is not less than p6" << endl;
    }

    // any algorithm , built in function applies for vector also applies for pair .

    return 0;
}