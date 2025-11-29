from typing import List


class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        k = 0
        for num in nums:
            if num != val:
                nums[k] = num
                k += 1
        return k


nums: List[int] = [1, 2, 2, 3, 4, 5, 6, 7]
k = Solution().removeElement(nums, 2)
for i in range(0, k):
    print(nums[i], " ")
