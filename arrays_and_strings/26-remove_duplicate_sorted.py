from typing import List


class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        k = 1
        for i in range(1, len(nums)):
            if nums[i - 1] != nums[i]:
                nums[k] = nums[i]
                k += 1
        return k


nums: List[int] = [1, 1, 2, 3, 4, 5, 6, 7, 7]
k = Solution().removeDuplicates(nums)
print(nums[:k])
