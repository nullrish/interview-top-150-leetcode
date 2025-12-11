#include <iostream>
#include <vector>

using namespace std;
/*
You are given an integer array `prices` where `prices[i]` is the
price of a given stock on the `ith` day.

On each day, you may decide to buy and/or sell the stock. You can only
hold at most one share of the stock at any time. However, you can
sell and buy the stock multiple times on the same day,
ensuring you never hold more than one share of the stock.

Find and return the maximum profit you can achieve.
*/
class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int totalProfit = 0;
    for (int i = 1; i < prices.size(); i++) {
      int dailyProfit = max(0, prices[i] - prices[i - 1]);
      totalProfit += dailyProfit;
    }
    return totalProfit;
  }
};

int main() {
  vector<int> prices = {7, 1, 3, 5, 6};
  cout << Solution().maxProfit(prices);
  return 0;
}
