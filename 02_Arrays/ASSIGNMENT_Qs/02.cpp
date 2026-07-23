#include<iostream>
using namespace std;
int findTarget(int arr[],int n, int target){
    int st = 0;
    int end = n-1;
 while(st<=end){
    int mid = st+(end-st)/2;
    if(arr[mid]==target){
        return mid;
    }
    
    if(target>=arr[st] && target<=arr[mid]){
       end = mid-1;
    }else{
      st=mid+1;
    }
   
 }
 return -1;
}
int main(){
    int arr[]={4,5,6,7,0,1,2};
    int n = sizeof(arr)/sizeof(int);
    int target = 2;
    cout<<findTarget(arr,n, target);
    return 0;
}