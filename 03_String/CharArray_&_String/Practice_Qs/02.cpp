// ////=======================Reverese an array==========================================
#include<iostream>
#include<cstring>
using namespace std;
void reverseArray(char arr[],int n){
 int st = 0;
 int end = n-1;
 while(st<end){
    swap(arr[st], arr[end]);
    st++;
    end--;

 }

}
int main(){
    char arr[] = {'h','e','l','l','o'};
    int n = strlen(arr);

    reverseArray(arr,n);
    cout<<arr;
    return 0;
}