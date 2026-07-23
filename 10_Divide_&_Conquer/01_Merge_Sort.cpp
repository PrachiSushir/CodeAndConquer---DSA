#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[], int si, int mid, int ei){     // conquer step  //TC: O(n)
    vector<int>temp;
    int i = si;
    int j = mid+1;

    while(i<=mid && j<=ei){
        if(arr[i]<= arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }
    // for remaining element
    while(i<=mid){
     temp.push_back(arr[i++]);
    }  //only 1 loop from the both will run
    while(j<=ei){
        temp.push_back(arr[j++]);
    }

    // //vector-->original
    for(int idx = si, x = 0; idx <=ei; idx++){
        arr[idx] = temp[x++];
    }
}
void printArr(int arr[], int n){
    for(int i = 0 ;i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void mergeSort(int arr[], int si, int ei){       //  Divide step //TC: log n
    // basecase
    if(si>=ei){
        return;
    }
 int mid = si + (ei-si)/2;
 mergeSort(arr, si, mid);  //left half
 mergeSort(arr, mid+1, ei);  //right half 

//  to combined left sorted and right sorted subarrays(conquer)
merge(arr, si, mid, ei);

}
int main(){
    int arr[6] = {6,3,7, 5, 2, 4};
    int n = 6;
    mergeSort(arr, 0, n-1);
    printArr(arr, n);
    return 0;
}


