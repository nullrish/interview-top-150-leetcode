from typing import List


class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        i = m - 1
        j = n - 1
        k = m + n - 1

        while j >= 0:
            if i >= 0 and nums1[i] > nums2[j]:
                nums1[k] = nums1[i]
                i -= 1
            else:
                nums1[k] = nums2[j]
                j -= 1
            k -= 1
        print(nums1)


nums1: List[int] = [0, 1, 2, 3, 4, 0, 0, 0, 0, 0]
nums2: List[int] = [2, 3, 4, 5, 6]
m = 5
n = len(nums2)

Solution().merge(nums1, m, nums2, n)
