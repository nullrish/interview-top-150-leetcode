#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
/*
You are given a 0-indexed array of integers `nums` of length `n`. You
are initially positioned at index 0.

Ecah element `nums[i` represents the maximum length of a forward
jump from index `i`. In other words, if you are at index `i`, you
can jump to any index `(i + j)` where:

- 0 <= j <= nums[i] amd
- i + j < n

Return the minimum number of jumps to reach index `n - 1`. The
test cases are generated such that you can reach index `n - 1`.
*/

class Solution {
public:
  int jump(vector<int> &nums) {
    int curFarthest = 0;
    int curEnd = 0;
    int jumps = 0;
    for (int i = 0; i < nums.size() - 1; i++) {
      int curFarthest = max(curFarthest, i + nums[i]);

      if (i == curEnd) {
        jumps++;
        curEnd = curFarthest;
      }
    }
    return jumps;
  }
};

int main() {
  vector<int> nums = {2, 3, 1, 1, 4};
  cout << Solution().jump(nums) << endl;

  return 0;
}
