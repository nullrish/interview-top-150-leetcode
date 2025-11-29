from typing import List


class Solution:
    def canJump(self, nums: List[int]) -> bool:
        reach = 0
        for i, v in enumerate(nums):
            if i > reach:
                return False
            reach = max(reach, i + v)
        return True


nums: List[int] = [2, 3, 1, 1, 4]
print(Solution().canJump(nums))
