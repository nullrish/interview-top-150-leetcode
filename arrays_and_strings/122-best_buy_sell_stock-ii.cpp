#include <iostream>
#include <vector>

using namespace std;

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
