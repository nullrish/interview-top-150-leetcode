from collections import defaultdict
from typing import List


class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        count = defaultdict(int)
        k = 0
        for num in nums:
            if count[num] < 2:
                nums[k] = num
                k += 1
                count[num] += 1
        return k


nums: List[int] = [1, 1, 1, 2, 2, 2, 3, 3, 4, 5, 5, 5, 5]
k = Solution().removeDuplicates(nums)
print(nums[:k])
