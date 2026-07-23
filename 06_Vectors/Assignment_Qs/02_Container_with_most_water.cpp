

// // //Container with most water (bruet force)  ==> O(n^2)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,8,6,2,5,4,8,3,7};
//     int n = sizeof(arr)/sizeof(int);
//     int maxWater = 0;
//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//              int width = j-i;
//             int height = min(arr[i], arr[j]);
//             int area = width * height;
//             maxWater = max(maxWater, area);
//         }
       
//     }
//      cout<<maxWater;
//     return 0;
// }

// //Optimized approach
#include<iostream>
#include<vector>
using namespace std;
 
int mostWater(vector<int>height){
    int n = height.size();
    int st = 0;
    int end = n-1;
    int maxWater = 0;
    while(st<end){
      int width = end-st;
      int size = min(height[st], height[end]);
      int currWater = width * size;
     maxWater = max(maxWater, currWater);
      if(height[st] < height[end]) {
            st++;
        } else {
            end--;
        }
  }
    
         return maxWater;
    }

int main(){
vector<int>height = {1,8,6,2,5,4,8,3,7};
mostWater(height);
    return 0;
}

// //TC: O(n)
// //SC: O(1)