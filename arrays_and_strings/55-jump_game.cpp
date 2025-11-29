#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>
using namespace std;

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
