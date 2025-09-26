// leetcode 1769 solve
#include <bits/stdc++.h>

vector<int> minOperations(string boxes)
{
    int n = boxes.size();
    vector<int> ans(n, 0);

    // Pass 1: Left to Right
    int balls = 0, moves = 0;
    for (int i = 0; i < n; i++)
    {
        ans[i] += moves;
        if (boxes[i] == '1')
            balls++;
        moves += balls;
    }

    // Pass 2: Right to Left
    balls = 0;
    moves = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] += moves;
        if (boxes[i] == '1')
            balls++;
        moves += balls;
    }

    return ans;
}

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i ++) {
        cin >> v[i];
    }

    vector<int> ans(n);
    ans = minOperations(v);

    for(int i = 0 ; i < n; i ++) {
        cout << ans[i];
    }
    
}