// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int>setMismatch(vector<int>nums){
//     int n = nums.size();
//     vector<int>freq(n+1, 0);
//     vector<int>ans;
//     int duplicate = 0;
//     int missing = 0;
//     for(int i = 0; i<n; i++){
//         freq[nums[i]]++;
          
//     }

//     for(int i = 1; i<=n; i++){
//           if(freq[i]==2){
//              duplicate = i;
//           } else if(freq[i] == 0){
//             missing = i;
//           }
//     }
//     ans.push_back(duplicate);
//     ans.push_back(missing);
//     return ans;
// }
// int main(){
// vector<int>nums={1,1};
// vector<int> result = setMismatch(nums);

//     for(int i =0; i<result.size(); i++){
//         cout<<result[i]<<" ";
//     }
//     return 0;

// }

