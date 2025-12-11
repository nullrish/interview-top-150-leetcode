from typing import List


class Solution:
    def hIndex(self, citations: List[int]) -> int:
        n = len(citations)
        count: List[int] = [0] * (n + 1)
        for c in citations:
            if c >= n:
                count[n] += 1
            else:
                count[c] += 1
        papers = 0
        for i in range(n, -1, -1):
            papers += count[i]
            if papers >= i:
                return i
        return 0


nums: List[int] = [3, 0, 6, 1, 5]
print(Solution().hIndex(nums))
