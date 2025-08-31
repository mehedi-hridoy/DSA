// two pointer approach for two sum
// time complexity O(n log n)
#include<bits/stdc++.h>
using namespace std;
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"

int two_sum_twoPinter(int n,int target, vector<int>& arr) {
    sort(arr.begin(),arr.end());

    int start =0, end = n-1;
    while(start < end) {
        int sum = arr[start] + arr[end];
        if(sum == target) {
            cout << arr[start] << " " << arr[end];
            break;
        } else if (sum < target) {
            start ++;
        } else {
            end--;
        }
    }

}

int main() {
    int n,target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i =0; i < n; i++) cin >> arr[i];

    two_sum_twoPinter(n,target,arr);
}