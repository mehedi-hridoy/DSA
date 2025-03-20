//Sum of Natural Number's  From 1 to N 
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cout << "Enter a number: ";
    cin >> n;

    long long sum = (1LL * n * (n+1)) / 2;  //best time complexity 
 
    cout << "The sum of first " << n << "natural number is: " << sum << endl;

}

/*
 alternative logic 

 int sum =  0
 for(int i =0 ; i< n; i++) {
    sum += i ; 
 }

 cout << sum << endl;
  
*/
