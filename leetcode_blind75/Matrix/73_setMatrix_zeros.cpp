#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;  
    vector<vector<int>> v(n, vector<int>(m));

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    vector<int> row(n, 0), col(m, 0);

    // Step 1: Mark rows and columns that need to be zeroed
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Step 2: Set elements to zero based on markings
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i] == 1 || col[j] == 1) {
                v[i][j] = 0;
            }
        }
    }

    // Output the modified matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
