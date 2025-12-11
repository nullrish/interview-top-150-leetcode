
#include <iostream>
#include <vector>

using namespace std;

/*
  Given an array `nums` of size `n`, return the majority element.

  The majority element is the element that appears more than `[n / 2]` times.
  You may assume that the majority element always exists in the array.

  Example 1:
  Input: nums = [3, 2, 3]
  Output: 3
*/

// This solution is to ensure that the vector got atleast one candidate
class Solution {
public:
  int majorityElement(vector<int> &nums) {
    int candidate = -1;
    int count = 0;

    for (int num : nums) {
      if (count == 0) {
        candidate = num;
        count = 1;
      } else if (num == candidate) {
        count++;
      } else {
        count--;
      }
    }
    return candidate;
  }
};

int main() {
  vector<int> nums = {1, 1, 2, 3, 2, 2, 2, 2, 3};
  cout << Solution().majorityElement(nums);
}
