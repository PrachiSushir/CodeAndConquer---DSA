// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// void permutation(string str, string ans){
// int n = str.size();
// if(n==0){
// cout<<ans<<"\n";
// return;
// }
// for(int i = 0; i<str.size(); i++){
//     char ch = str[i];
//     string nextStr = str.substr(0,i) + str.substr(i+1, n-i-1);
//     permutation(nextStr, ans+ch);   // ith char choice to add i perm
// }
// }

// int main(){
//     string str = "abc";
//     string ans = "";
//     permutation(str, ans);
//     return 0;
// }
// as total permutations = n!
// TC: O(n!)
// SC : O(n).

#include<iostream>
#include<string>
using namespace std;
void permutation(string str, string ans){
    int n = str.size();
    if(n==0){
    cout<<ans<<endl;
    return;
    }
    for(int i = 0; i<str.size(); i++){
        char ch = str[i];
    permutation(str.substr(0, i)+str.substr(i+1, n-1), ans+ch);

    }

}
int main(){
    string str = "abc";
    string ans = "";
    permutation(str, ans);
    return 0;
}