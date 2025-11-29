#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

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
