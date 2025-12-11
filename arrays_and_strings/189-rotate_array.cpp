#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

class Solution {
public:
  void rotate(vector<int> &nums, int k) {
    int n = nums.size();
    k %= n;
    int cycles = gcd(k, n);
    for (int i = 0; i < cycles; i++) {
      int currIdx = i;
      int currEle = nums[currIdx];
      while (true) {
        int nextIdx = (currIdx + k) % n;
        int nextEle = nums[nextIdx];

        nums[nextIdx] = currEle;

        currEle = nextEle;
        currIdx = nextIdx;

        if (currIdx == i)
          break;
      }
    }

    for (int i = 0; i < n; i++) {
      cout << nums[i] << " ";
    }
  }
};

int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
  Solution().rotate(nums, 3);
  return 0;
}
