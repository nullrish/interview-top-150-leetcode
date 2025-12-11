#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

using namespace std;
/*
 You are given an array `prices` where `prices[i]` is the price of a given
 stock on the `ith` day.

 You want to maximize your profit by choosing a single day to buy
 one stock and choosing a different day in the future to sell that
 stock.

 Return the maximum profit you can achieve from this transaction.
 If you cannot achieve any profit, return `0`.
*/

class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int minPrice = numeric_limits<int>::max();
    int maxPrice = numeric_limits<int>::min();

    cout << minPrice << " " << maxPrice << endl;

    for (int price : prices) {
      minPrice = std::min(minPrice, price);
      maxPrice = std::max(maxPrice, price - minPrice);
    }
    cout << minPrice << " " << maxPrice;
    return maxPrice;
  }
};

int main() {
  vector<int> prices = {7, 1, 2, 3, 5, 6};
  Solution().maxProfit(prices);
  return 0;
}
