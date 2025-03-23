#include <bits/stdc++.h>
using namespace std;
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl "\n"

void buy_and_sell_stock(vector<int>& prices) {
    int maxProfit = 0, bestBuy = prices[0];

    for(int i = 1; i < prices.size(); i++) {
        maxProfit = max(maxProfit, prices[i] - bestBuy);  
        bestBuy = min(bestBuy, prices[i]);  
    }

    cout << maxProfit << nl;
}

int main() {
    fast_io();
    int n;
    cin >> n;
    vector<int> prices(n);
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    buy_and_sell_stock(prices);
}
