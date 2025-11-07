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

    vector<int> rows(n, 0), cols(m, 0);

    // Step 1: mark rows and columns to be zeroed
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == 0) {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }

    // Step 2: set zeros
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (rows[i] == 1 || cols[j] == 1) {
                v[i][j] = 0;
            }
        }
    }

    // Output
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
