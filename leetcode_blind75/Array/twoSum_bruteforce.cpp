// two sum leetcode bruteforce solution
// time complexity O(n*n)
#include<bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr);

#define nl "\n"

int two_sum_bruteforce(int nums, int target, vector<int>& arr) {
    int first,second,sum;
    for(int i = 0; i < nums; i++) {
        first = arr[i];
        for(int j = 1; j < nums; j++) {
            second = arr[j];
            sum = first + second;
            if(sum == target) {
                cout << i << " " << j;
                
            }
            break;
        }
        
    }

}

int main() {
    fast_io();

    int nums,target;
    cin >> nums >> target;
        
    vector<int> arr(nums);

    for(int i = 0; i < nums; i++) cin >> arr[i];




    two_sum_bruteforce(nums,target,arr);



}
