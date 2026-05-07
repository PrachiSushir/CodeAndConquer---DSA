// #include<iostream>
// using namespace std;
// int trapWater(int height[], int n){
//     int leftMax[20000];
//     leftMax[0]=height[0];
//     int rightMax[20000];
//     rightMax[n-1]=height[n-1];
    
    
//     for(int i = 1; i<n; i++){
//      leftMax[i] = max(leftMax[i-1],height[i-1]);
    
//     }
//     for(int i = n-2; i>=0; i--){
//         rightMax[i]=max(rightMax[i+1], height[i+1]);
//     }
//     int waterTrap = 0;
    
//     for(int i = 0; i<n; i++){
//        int currWater = min(leftMax[i], rightMax[i]);
//         currWater = currWater-height[i];
//         if(currWater>0){
//             waterTrap+=currWater;
//         }
//     }
//     return waterTrap;
// }
// int main(){
//     int height[]={4,2,0,6,3,2,5};
//     int n = sizeof(height)/sizeof(int);
//     cout<<trapWater(height, n);
//     return 0;
// }


#include<iostream>
using namespace std;
int TrappinWater(int height[], int n){
int leftMax[20000];
int rightMax[20000];

leftMax[0]= height[0];
rightMax[0]=height[n-1];
for(int i = 1; i<n; i++){
    leftMax[i] = max(height[i-1], leftMax[i-1]);
   
}
for(int i = n-2; i>=0; i--){
    rightMax[i] = max(height[i+1], rightMax[i+1]);
   
}
int waterTrap=0;
for(int i = 0; i<n; i++){
    int trapHeight = min(leftMax[i],rightMax[i]);
    trapHeight = trapHeight-height[i];
    if(trapHeight>0){
        waterTrap+=trapHeight;
    }

}
return waterTrap;
}
int main(){
    int height[]={4,2,0,6,3,2,5};
    int n = sizeof(height)/sizeof(int);
    cout<<TrappinWater(height, n);
    return 0;
}
// //TC : o(n);