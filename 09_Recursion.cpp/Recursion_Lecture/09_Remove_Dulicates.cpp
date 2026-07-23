#include<iostream>
#include<string>
using namespace std;
void removeDuplicates(string str, string ans, int i, int count[]){
    // basecase
    if(i==str.length()){
        cout<<"ans: "<<ans<<endl;
        return;
    }
    // work
    int ch = (int)str[i]-'a';
    if(count[ch]==true){ //duplicate found
        // recursive calls
   removeDuplicates(str,ans,i+1,count);
    }else{ //not duplicate
        count[ch]=true;
  removeDuplicates(str,ans+str[i],i+1,count);
    }
    
}
int main(){
    string str = "apnnaacollege";
    string ans="";
    int count[26] = {false};
removeDuplicates(str, ans, 0, count);
    return 0;
}