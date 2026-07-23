// #include<iostream>
// #include<climits>
// using namespace std;
// void countSort(int arr[], int n){
//     int freq[10000]={0};
//     int minVal = INT_MAX;
//     int maxVal = INT_MIN;
//     for(int i = 0; i<n; i++){
//        minVal = min(minVal, arr[i]);
//        maxVal = max(maxVal,arr[i]);
//     }
//      for(int i = 0; i<n; i++){
//         freq[arr[i]]++;
//     }
//     // range
//     for(int i = minVal, j = 0; i<=maxVal; i++){
//         while(freq[i]>0){
//         arr[j++] = i;
//         freq[i]--;
       
//         }
       
//     }
  
// }

// int main(){

//     int arr[8]={1,4,1,3,2,4,3,7};
//     int n = sizeof(arr)/sizeof(int);
//     countSort(arr, n);
//      // Print sorted array
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }

    
//     return 0;
// }

// TC: O(k+n);

// Counting Sort has time complexity O(n + k), where n is the number of elements and k is the range of values. The frequency array is built in O(n) time, and the range is traversed in O(k) time. Since these two works happen separately, we add them, giving O(n + k).