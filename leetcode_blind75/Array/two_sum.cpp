#include <bits/stdc++.h>
using namespace std;

bool twoSum(int arr[], int n, int t) {
    for (int i = 0; i < n; i++) {  // Fix: i < n instead of i <= n
        for (int j = 1; j < n; j++) {  // Fix: j = i + 1 to avoid duplicate checks
            if (arr[i] + arr[j] == t) {
                return true;
                break;  // Fix: Return immediately when found
            }
        }
    }
    return false;
}

void input() {
    int n;
    cin >> n;
    int targetSum;
    cin >> targetSum;
    
    int arr[n];
    for (int i = 0; i < n; i++) {  // Fix: i < n instead of i <= n
        cin >> arr[i];
    }

    // Fix: Call the function correctly
    if (twoSum(arr, n, targetSum)) {
        cout << "Two sum found\n";
    } else {
        cout << "Two sum not found\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    input();
}
