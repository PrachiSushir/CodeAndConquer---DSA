// ======isPalindrom=====================

#include<iostream>
#include<cstring>
using namespace std;
bool isPalindrome(char arr[], int n){
    int st = 0; 
    int end = n-1;
   while(st<end){

        if(tolower(arr[st])!=tolower(arr[end])){
        
            cout<<"not palindromic"<<endl;
            return false;
        }
         st++;
         end--;
    }
            cout<<"palindromic"<<endl;
             return true;
       
}

int main(){
    char arr[]="Racecar";
    int n = strlen(arr);
    cout<<isPalindrome(arr,n);
    return 0;
}
