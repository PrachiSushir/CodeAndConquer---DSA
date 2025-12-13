#include<iostream>
using namespace std;
int majority(int nums[], int size){
    int freq = 0;
    int ans =0;
    for(int i=0; i<size; i++) {
        if(freq ==0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        } else{
            freq--;
        }
    }
    return ans;
}
int main() {
    int nums[]= {3, 2, 3};
    int size = 3;
    cout<<majority(nums, size);
    return 0;
}
