#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

using namespace std;

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
