// Pattern 01
/**
    1 1 1 1 1
    2 2 2 2 2
    3 3 3 3 3
    4 4 4 4 4
    5 5 5 5 5
 */
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << '\n';
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << i << " ";
        }

        cout << endl;
    }
}