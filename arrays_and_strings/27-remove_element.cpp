#include <iostream>
#include <vector>
using namespace std;
/*
Given an integer array `nums` and an integer `val`, remove all
occurences of `val` in `nums` in-place. The order of the elements may be
changed. Then return the number of elements in `nums` which are not equal `val`.

Consider the number of elements in `nums` which are not equal to
`val` be `k`, to get accepted, you need to do the following things:

- Change the array `nums` such that the first `k` elements of `nums`
contains the elements which are not equal to `val`. The remaining elements
of `nums` are not important as well as the size of nums.

- Return `k`.
*/
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
