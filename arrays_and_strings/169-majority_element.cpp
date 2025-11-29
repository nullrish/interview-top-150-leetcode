
#include <iostream>
#include <vector>

using namespace std;

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
