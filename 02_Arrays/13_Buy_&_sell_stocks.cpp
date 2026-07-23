/*Qs. 121(Leetcode) :
You are given an array prices where prices[i] is the price of a given stock on the ith day.
//You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
//Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
=====================================================================================================
Algorithm:
1. Take stock prices array.
2. Create bestBuy array.
3. Set bestBuy[0] = INT_MAX.
4. Traverse array from i = 1 to n-1:
       bestBuy[i] = minimum(prices[i-1], bestBuy[i-1])
5. Initialize maxProfit = 0.
6. Traverse array from i = 0 to n-1:
       currProfit = prices[i] - bestBuy[i]
       maxProfit = maximum(maxProfit, currProfit)
7. Print maxProfit.

===================================================================================================*/
// LOGIC:
#include<iostream>
#include<climits>
using namespace std;
void BuySellStock(int prices[],int n){
    int bestBuy[100000];
    bestBuy[0]=INT_MAX;
    for(int i = 1; i<n; i++){    // why i starts with 1 ===> selling and buying can't be on same day also buying day must be the day before sell
        bestBuy[i]=min(prices[i-1],bestBuy[i-1]);
       

    }
    int maxProfit = 0;
    for(int i=0; i<n; i++){
      int currProfit = prices[i] - bestBuy[i];
      maxProfit = max(maxProfit,currProfit);

    }
    cout<<"maximum profit is : "<<maxProfit;
}
int main(){
 int prices[] = {7, 1, 5, 3, 6, 4};
 int n = sizeof(prices)/sizeof(int);
 BuySellStock(prices,n);
  
    return 0;
}
