#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int removeElement(vector<int> &nums, int val) {
    int k = 0;
    for (int num : nums) {
      if (num != val) {
        nums[k] = num;
        k++;
      }
    }
    return k;
  }
};

int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6, 6};
  int val = 6;
  int k = Solution().removeElement(nums, val);
  for (int i = 0; i < k; i++) {
    cout << nums[i] << " ";
  }
  return 0;
}
