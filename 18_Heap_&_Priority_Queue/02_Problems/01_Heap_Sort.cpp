// #include<iostream>
// #include<vector>
// using namespace std;
// void heapify(int i, vector<int> &arr, int n){
// int left = 2 * i + 1;
// int right = 2 * i + 2;

// int maxIdx = i;

// if(left < n && arr[left] > arr[maxIdx]){
//     maxIdx = left;
// }
// if(right < n && arr[right] > arr[maxIdx]){
//     maxIdx = right;
// }
//  if(maxIdx != i){
//     swap(arr[i], arr[maxIdx]);
//     heapify(maxIdx, arr, n);
//  }
// }
// void heapSort(vector<int> &arr){
//     int n = arr.size();
//     // step 1: building maxheap    
//     for(int i = n/2-1; i>=0; i--){
//         heapify(i, arr, n);
//     }

//     // step 2: taking elements to their correct position
//      for(int i = n-1; i>=0; i--){
//         swap(arr[0], arr[i]);
//         heapify(0, arr, i);
//     }

// }
// int main(){
//     vector<int> arr = {1,4,2,5,3};
//     heapSort(arr);
//     for(int i = 0; i< arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// for descending order

#include<iostream>
#include<vector>
using namespace std;
void heapify(int i, vector<int> &arr, int n){  //log n
int left = 2 * i + 1;
int right = 2 * i + 2;

int minIdx = i;

if(left < n && arr[left] < arr[minIdx]){
   minIdx = left;
}
if(right < n && arr[right] < arr[minIdx]){
    minIdx = right;
}
 if(minIdx != i){
    swap(arr[i], arr[minIdx]);
    heapify(minIdx, arr, n);
 }
}
void heapSort(vector<int> &arr){  //n* logn
    int n = arr.size();
    // step 1: building maxheap    
    for(int i = n/2-1; i>=0; i--){  //n * log n
        heapify(i, arr, n);
    }

    // step 2: taking elements to their correct position
     for(int i = n-1; i>=0; i--){
        swap(arr[0], arr[i]);
        heapify(0, arr, i);
    }

}
int main(){
    vector<int> arr = {1,4,2,5,3};
    heapSort(arr);
    for(int i = 0; i< arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

// TC : O(nlog n)