#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>
using namespace std;
/*
You ar egiven an integer array `nums`. You are initially positioned at
the array's first index, and each element in the array represents
your maximum jump length at that position.

Return `true` if you can reach the last index, or `false` otherwise.

Example 1:
INput: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
*/

class Solution {
public:
  bool canJump(vector<int> &nums) {
    int reach = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (i > reach) {
        return false;
      }
      reach = max(reach, i + nums[i]);
    }
    return true;
  }
};

int main() {
  vector<int> nums = {2, 3, 1, 1, 4};
  cout << boolalpha;
  cout << Solution().canJump(nums);
  return 0;
}
