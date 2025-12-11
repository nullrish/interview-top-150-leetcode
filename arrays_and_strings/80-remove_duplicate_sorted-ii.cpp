#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
/*
Given an integer array `nums` sorted in non-decreasing order,
remove some duplicates in-place such that each unique element
appears at most twice. THe relative order of the elements should
be kept the same.

Since it is impossible to change the length of the array in some languages you
must instead have the result be placed in the first part of the array `nums`.
More formally, if there are `k` elements after removing the duplicates, then the
first `k` elements of `nums` should hold the final result. It does not matter
what you leave beyond the first `k` elements.

Return `k` after placing the final result in the first `k` slots of `nums`.

Do not allocate extra space for another array. You must do this by modifying the
input array in-place with O(1) extra memory.`
*/

class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    unordered_map<int, int> count;
    int k = 0;
    for (int num : nums) {
      if (count[num] < 2) {
        nums[k] = num;
        k++;
        count[num]++;
      }
    }
    return k;
  }
};

int main() {
  vector<int> nums = {1, 1, 1, 1, 2, 2, 2, 3, 4, 4, 5, 5, 5};
  int k = Solution().removeDuplicates(nums);
  for (int i = 0; i < k; i++) {
    cout << nums[i] << " ";
  }
  return 0;
}
