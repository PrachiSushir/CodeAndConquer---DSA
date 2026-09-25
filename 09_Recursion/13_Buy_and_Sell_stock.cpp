/*
# Problem Statement (LeetCode 121: Best Time to Buy and Sell Stock)

You are given an array prices[] where prices[i] is the price of a stock on day i.
You want to maximize your profit by choosing:
- ONE day to buy the stock
- ONE different day in the future to sell it

Return the maximum profit you can achieve.
If no profit is possible, return 0.

Example:
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 1 (price = 1), sell on day 4 (price = 6)

# Approach

1. Start with minimum price = very large value
2. Traverse prices array
3. Update minimum price if current price is smaller
4. Calculate profit = current price - minimum price
5. Update maximum profit
6. Return maximum profit

# Time Complexity:
O(n) → We traverse the array once

# Space Complexity:
O(1) → No extra space used


# Real Life Application

- Stock market trading (finding best buy & sell time)
- Currency exchange profit tracking
- Business decision making (buy low, sell high)
- Data analytics for trend optimization
*/


#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < prices.size(); i++) {
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << maxProfit(prices);
    return 0;
}

