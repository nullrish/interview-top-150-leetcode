from typing import List


# This solution is for the case when nums have atleast one majority element
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        candidate = -1
        count = 0
        for num in nums:
            if count == 0:
                candidate = num
                count = 1
            elif num == candidate:
                count += 1
            else:
                count -= 1
        return candidate


nums: List[int] = [1, 3, 3, 3, 2]
print(Solution().majorityElement(nums))
