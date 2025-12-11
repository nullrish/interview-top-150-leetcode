#include <iostream>
#include <vector>

using namespace std;
/*
Given an array of integers `citations` where `citations[i]` is the number of
citations a researcher received for their `ith` paper, return the researcher's
h-index.

The h-index is defined as the maximum value of `h` such that the given
researcher has published atleast `h` papers that have each been cited
atleast `h` times.
*/

class Solution {
public:
  int hIndex(vector<int> &citations) {
    int n = citations.size();
    vector<int> count(n + 1, 0);
    for (int citation : citations) {
      if (citation >= n)
        count[n]++;
      else
        count[citation]++;
    }

    int papers = 0;
    for (int i = n; i >= 0; i--) {
      papers += count[i];
      if (papers >= i)
        return i;
    }
    return 0;
  }
};

int main() {
  vector<int> citations = {3, 0, 6, 1, 5};
  cout << Solution().hIndex(citations) << endl;
  return 0;
}
