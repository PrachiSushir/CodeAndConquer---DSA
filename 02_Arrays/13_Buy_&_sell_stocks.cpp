#include<iostream>
#include<climits>
using namespace std;
void BuySellStock(int prices[],int n){
    int bestBuy[100000];
    bestBuy[0]=INT_MAX;
    for(int i = 1; i<n; i++){
        bestBuy[i]=min(prices[i-1],bestBuy[i-1]);
        // cout<<bestBuy[i];

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

// //TC : o(n);

