#include <numeric>
#include <vector>

using namespace std;

class Solution {
public:
  void rotate(vector<int> &nums, int k) {
    int n = nums.size();
    k %= n;
    int cycles = gcd(k, n);
  }
};
