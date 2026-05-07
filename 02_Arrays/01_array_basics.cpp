// #include<iostream>
// using namespace std;
// int main(){
//     // declaration of an array
//     int marks[50]; //0 to 49
//     cout<<marks[0]<<endl; //garbage value
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
// // //NOTE* if we already initialize a array with some value then by default other remaining index is get initialize with 0 not garbage value
//     int marks2[50] = {1,2,3}; //0 to 49
//     cout<<marks2[0]<<endl; //garbage value
//     cout<<marks2[1]<<endl;
//     cout<<marks2[2]<<endl;
//     cout<<marks2[3]<<endl; //surity
//     return 0;
// }
// //=============================//to find the length of array=====================================================

// #include<iostream>
// using namespace std;
// int main(){

//  int nums[] = {1,2,3,4,5};  //memory is allocated at the time of compilation
//  int length = sizeof(nums)/sizeof(int);
//  cout<<length<<endl;

//     return 0;
// }

// //============================================//Loop on array for printing the output=====================================
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int length = sizeof(arr)/sizeof(int);
//     for(int i = 0; i<=length-1; i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }


// //=============================================//Loop on array for printing the input=====================================

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10];
//     int length = sizeof(arr)/sizeof(int);
//     for(int i = 0; i<=length-1; i++){
//         cin>>arr[i];
       
//     }
//     for(int i = 0; i<=length-1; i++){
//         cout<<arr[i]<<" ";
       
//     }
//     cout<<endl;

//     return 0;
// }


// // ================================//Find the maximum & minimum value of an array==========================================

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[] = {1,5,10,12};
//     int length = sizeof(arr)/sizeof(int);
//     int n = length-1;
//     int max;
//     int min;
//     for(int i = 0; i<=n; i++){
//         max = arr[0];
//         min = arr[0];
//         if(arr[i]>=max){
//             max = arr[i];
//         }
//         if(arr[i]<=min){
//             min = arr[i];
//         }
    
//     }
//     cout<<"largest value is : "<<max<<endl;
//     cout<<"smallest value is : "<<min<<endl;
//     return 0;
// }
// //-----OR-----//
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,5,15,0};
//     int n = sizeof(arr)/sizeof(int);

//     int max = arr[0];
//     int min = arr[0];
//     for(int i = 0; i<n; i++){
//         if(arr[i]>max){
//             max = arr[i];
            
//         }
//         else{
//             min = arr[i];
        
//     }

//     }
//     cout<<"maximum num is :"<<max<<endl;
//     cout<<"minimum num is :"<<min;
//     return 0;
// }

// //===============================================// Linear Search on Array==============================================

// #include<iostream>
// using namespace std;
//  int linSearch(int arr[], int n, int key){

//   for(int i = 0; i<=n-1; i++){
//     if(arr[i]==key){
//         return i;
        
//   }
// }
//   return -1;
// }
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int);
//     int key = 12;
//     cout<<linSearch(arr, n, key);
//     return 0;
// }

// //==========================================// Reverse an Array==========================================================

// #include<iostream>
// using namespace std;
// void printArray(int arr[], int n){
//     int copyArr[6];
    
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<",";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int n = sizeof(arr)/sizeof(int);
//     int copyArr[n];  //array needs size befor execution but n is known(calculated) after execution can write arr[6]
//     for(int i=0; i<n; i++){
//         int j = n-i-1;
//         copyArr[i]=arr[j];
//     }
//     for(int i = 0; i<n; i++){
//         arr[i]=copyArr[i];
//     }
//     printArray(arr,n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void printArr(int arr[], int n){
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<endl;
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int n = sizeof(arr)/sizeof(int);
//     int start = 0;
//     int end = n-1;

//     while(start<=end){
//         int temp  = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;

//     }
//     printArr(arr,n);

//     return 0;
// }
// //=============================Finding the key using the binary search algo================================================

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int binSearch(int arr[], int n, int key){
    
//     int st = 0;
//     int end = n-1;
//     sort(arr,arr+n);
//     while(st<=end){
//         int mid = st+(end-st)/2;
//         if(arr[mid]==key){
//             return mid;
//         }else if(arr[mid]<key){
//             st = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
       
//     }
//      return -1;

// }
// int main(){
//     int arr[]= {1,3,4,5,2,6};
//     int n = sizeof(arr)/sizeof(int);
//     int key = 4;
//     cout<<binSearch(arr,n,key);
   
//     return 0;
// }

// // ============================================// //Array POINTER=========================================================
// #include<iostream>
// using namespace std;
// int main(){
//     int x =10;
//     int *ptr = &x;
//     cout<<ptr<<endl;

//     int y =  15;
//     ptr = &y;
//     cout<<ptr<<endl; //value/address of pointer can change
//     // BUT
//     int arr[5];
//     cout<<arr<<endl;
// }

//     int z = 25;
//     arr = &z; //not possible in array pointer as we cant overwrite a value in array bcoz it is a constatnt value, it is always points to the zeroth idx of array and hence called as constant pointer, it is a read only value

//     return 0;
// }

// //================================================Pointer Arithematic==================================================
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int *ptr = &a;

//     cout<<ptr<<endl;
//     ptr++;   // 1 int ---> increamented 4 bytes in memory same for ptr--
//     cout<<ptr<<endl;
// // //================================================
// cout<<(ptr+3)<<endl; // // 3*int===>3*4 = 12 spaces leading. same for -3, this arithematic ptr are generally used in arrays
// // //================================================
// // ptr2-ptr1(how much space is in betwwen ptr1 and ptr2) is possible but ptr1 + pt2 is not as it is invalid or nonsensable
// // //================================================
// // comparison 
// // cout<<(ptr2>ptr1)====> yess generally comparison is used as '==' to check if both ptr are on same memory location or not
//     return 0;
// }

// //===========================================================================================================
// #include <iostream>
// using namespace std;

// --------------------------------------------------------------------
// 1. Function to calculate SUM of all numbers in an array
// --------------------------------------------------------------------
// int sumOfArray(int arr[], int n) {
//     int sum = 0;
//     for(int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
//     return sum;
// }

// --------------------------------------------------------------------
// 2. Function to calculate PRODUCT of all numbers in an array
// --------------------------------------------------------------------
// int productOfArray(int arr[], int n) {
//     int product = 1;
//     for(int i = 0; i < n; i++) {
//         product *= arr[i];
//     }
//     return product;
// }

// --------------------------------------------------------------------
// 3. Function to REVERSE an array
// --------------------------------------------------------------------
// void reverseArray(int arr[], int n) {
//     int start = 0, end = n - 1;
//     while(start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5;

//     cout << "Array elements: ";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // Calling SUM function
//     cout << "Sum of array = " << sumOfArray(arr, n) << endl;

//     // Calling PRODUCT function
//     cout << "Product of array = " << productOfArray(arr, n) << endl;

//     // Calling REVERSE function
//     reverseArray(arr, n);

//     cout << "Reversed array: ";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//  return 0;
// }
