#include<iostream>
#include<vector>
using namespace std;

int getMinCoins(vector<int>coins, int V){
    int n = coins.size();
    int ans = 0;
    for(int i = n-1; i>=0 && V>0; i--){
        if(V >= coins[i]){
            ans += V/coins[i];
            V = V % coins[i];
        }
    }
    cout<<"Minimum coins for change = "<<ans<<endl;
    return ans;
}
int main(){
    vector<int>coins = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
    int V = 590;
    getMinCoins(coins, V);
    return 0;
}


// TC : O(n) or O(1) bcoz the set of Indian coin denominations is fixed, then O(1) 