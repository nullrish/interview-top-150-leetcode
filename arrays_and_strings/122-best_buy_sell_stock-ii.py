from typing import List


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        total_profit = 0
        for i in range(1, len(prices)):
            daily_profit = prices[i] - prices[i - 1]
            if daily_profit > 0:
                total_profit += daily_profit
        return total_profit


prices: List[int] = [7, 1, 5, 3, 6, 4]
print(Solution().maxProfit(prices))
