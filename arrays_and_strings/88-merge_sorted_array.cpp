#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    if (m + n < nums1.size())
      return;

    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    while (j >= 0) {
      if (i >= 0 && nums1[i] > nums2[j]) {
        nums1[k] = nums1[i];
        i -= 1;
      } else {
        nums1[k] = nums2[j];
        j -= 1;
      }
      k -= 1;
    }

    for (int num : nums1) {
      cout << num << " ";
    }
  }
};

int main() {
  vector<int> nums1 = {1, 2, 3, 0, 0, 0, 0, 0};
  vector<int> nums2 = {2, 3, 4, 5, 6};
  int m = 3;
  int n = nums2.size();
  Solution().merge(nums1, m, nums2, n);
  return 0;
}
