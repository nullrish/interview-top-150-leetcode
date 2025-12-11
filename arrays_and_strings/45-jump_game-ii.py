from typing import List


class Solution:
    def jump(self, nums: List[int]) -> int:
        curFarthest = 0
        curEnd = 0
        jumps = 0
        n = len(nums)
        for i in range(0, n - 1):
            curFarthest = max(curFarthest, i + nums[i])
            if curEnd == i:
                curEnd = curFarthest
                jumps += 1
        return jumps


nums: List[int] = [2, 3, 1, 1, 4]
print(Solution().jump(nums))
