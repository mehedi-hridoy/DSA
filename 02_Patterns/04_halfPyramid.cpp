// Half Pyramid Pattern
/*
   1
   12
   123
   1234
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	for(int i = 0; i <= n; i++) {
		for(int j = 0; j <= i; j++) {
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}