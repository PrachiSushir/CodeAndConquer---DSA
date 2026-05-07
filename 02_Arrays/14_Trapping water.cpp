/*Qs. 42(Leetcode):
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
======================================================================================================
Algorithm:
1. Create leftMax[] and rightMax[] arrays.
2. Store maximum height from left side in leftMax[].
3. Store maximum height from right side in rightMax[].
4. For every index:
       water = min(leftMax[i], rightMax[i]) - height[i]
5. If water > 0:
       add into total trapped water.
 6. Return total trapped water.
*/

// LOGIC:
#include<iostream>
using namespace std;
int trapWater(int height[], int n){
    int leftMax[20000];
    leftMax[0]=height[0];
    int rightMax[20000];
    rightMax[n-1]=height[n-1];
    
    
    for(int i = 1; i<n; i++){
     leftMax[i] = max(leftMax[i-1],height[i-1]);
    
    }
    for(int i = n-2; i>=0; i--){
        rightMax[i]=max(rightMax[i+1], height[i+1]);
    }
    int waterTrap = 0;
    
    for(int i = 0; i<n; i++){
       int currWater = min(leftMax[i], rightMax[i]);
        currWater = currWater-height[i];
        if(currWater>0){
            waterTrap+=currWater;
        }
    }
    return waterTrap;
}
int main(){
    int height[]={4,2,0,6,3,2,5};
    int n = sizeof(height)/sizeof(int);
    cout<<trapWater(height, n);
    return 0;
}

// TC: O(n);