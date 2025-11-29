from typing import List
from sys import maxsize


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max_price = 0
        min_price = maxsize
        for p in prices:
            min_price = min(min_price, p)
            max_price = max(max_price, p - min_price)
        print(f"{{ {max_price} {min_price} }}")
        return max_price


prices: List[int] = [7, 1, 5, 3, 6, 4]
Solution().maxProfit(prices)
