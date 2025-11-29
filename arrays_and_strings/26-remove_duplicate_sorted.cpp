#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    int k = 1;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i - 1] != nums[i]) {
        nums[k] = nums[i];
        k++;
      }
    }
    return k;
  }
};

int main() {
  vector<int> nums = {1, 1, 1, 1, 2, 2, 2, 3, 3, 4};
  int k = Solution().removeDuplicates(nums);
  for (int i = 0; i < k; i++) {
    cout << nums[i] << " ";
  }
  return 0;
}
