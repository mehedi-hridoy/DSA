// Character Pyramid
/*
    A
    B C
    D E F
    G H I J
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	char ch = 'A';
	
	for(int i = 0; i <=n ; i++) {
		for(int j = 1; j <= i; j++) {
			cout << ch <<" ";
			ch++;
		}
		cout << endl;
	}
	return 0;
}