// //=======================Convert to Uppercase===========================
// #include<iostream>
// #include<cstring>
// using namespace std;
// void toUpperCase(char word[], int n){
// for(int i = 0; i<n; i++){
//     char ch = word[i];
//     if(word[i]>='A' && word[i]<='Z'){
//         continue;
//     }else{
//         word[i]= ch -'a'+'A';

//     }
// }
// }
// int main(){
// char word[] = "ApPle";
// int n = strlen(word);
// toUpperCase(word, n);
// cout<<word;
//     return 0;
// }

// //===================To Lower Case==========================================================
#include<iostream>
#include<cstring>
using namespace std;
void toLowerCase(char arr[],int n){
    for(int i = 0; i<n; i++){
        char ch = arr[i];
        if(ch>='a' && ch<='z'){
            continue;

        }else{
            arr[i]=ch-'A'+'a';

        }
    }
}
int main(){
    char arr[] = "AppLe";
    int n = strlen(arr);
    toLowerCase(arr, n);
    cout<<arr;
    return 0;
}