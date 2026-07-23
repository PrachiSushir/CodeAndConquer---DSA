// //====================Pairs Sum(bruetforce approach)========================

// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> pairSum(vector<int>vec, int target){
// vector<int>ans;
// for(int i = 0; i<vec.size()-1; i++){
//     for(int j = i+1; j<vec.size(); j++){
//         if(vec[i]+vec[j]==target){
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }

// }
// return ans;
// }
// int main(){
//     vector<int>vec={2,7,11,15};
//     int target = 9;
//     vector<int>result = pairSum(vec, target);
//     for(int i = 0; i<result.size(); i++){
//         cout<<result[i]<<" ";
//     }
//     return 0;
// }
// //TC: O(n^2)


// //Optimized approach(two pointer's approach)
#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int>vec, int target){
    vector<int>ans;
    int st = 0; 
    int end = vec.size()-1;
 
   while(st<end){
    int currSum = vec[st]+vec[end];
    if(currSum == target){
        ans.push_back(st);
        ans.push_back(end);
         return ans;
    } else if(currSum>target){
        end--;
    }else{
        st++;
        
    }

   }
    return ans;
}
int main(){
    vector<int>vec = {2,7,11,15};
    int target = 9;
    vector<int>result = pairSum(vec, target);
    for(int i = 0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }

    return 0;
}

// //TC: O(n)