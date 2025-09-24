// height checker leetcode 1051
#include<bits/stdc++.h>
using namespace std;
int heightChecker(vector<int>& height) {
   vector<int> s;
   s = height;
   
   sort(height.begin(),height.end());

   int c = 0;

   for(int i = 0; i < height.size();i ++) {
     if(s[i] != height[i] ) {
        c++;
     }
   }

   return c;
}
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i ++) {
        cin >> v[i];
    }

    int ans = heightChecker(v);
    cout << ans << endl;

    return 0;
}