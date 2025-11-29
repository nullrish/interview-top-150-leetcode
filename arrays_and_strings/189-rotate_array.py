from math import gcd
from typing import List


class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        n = len(nums)
        k %= n
        cycles = gcd(n, k)

        for i in range(cycles):
            currIdx = i
            currElem = nums[currIdx]

            while True:
                nextIdx = (currIdx + k) % n
                nextElem = nums[nextIdx]

                nums[nextIdx] = currElem

                currElem = nextElem

                currIdx = nextIdx

                if currIdx == i:
                    break


nums: List[int] = [1, 2, 3, 4, 5, 6, 7]
Solution().rotate(nums, 3)
print(nums)
