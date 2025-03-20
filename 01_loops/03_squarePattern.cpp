// Print the Square Pattern 
/*
    * * * * 
    * * * * 
    * * * * 
    * * * * 
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n = 4;


    for(int i = 0 ; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << '\n';
    }
}