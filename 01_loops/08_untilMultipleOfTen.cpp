// Input Number until it's multiple of TEN
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    do {
        cin >> n;
        if(n % 10 == 0) {
            break;
        }
        cout << " You Entered "<< n << endl;
    } while(true);
}

/*
while(n%10 != 0) {
    
       cin >> n;
       cout << n << " ";
   }

*/

