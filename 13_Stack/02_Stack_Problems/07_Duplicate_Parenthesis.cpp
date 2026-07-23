#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isDuplicate(string str){
stack<int>s;
for(int i = 0; i<str.size(); i++){
    char ch = str[i];
    if(ch != ')'){     // opening or non closing {until closing is found }
        s.push(ch);
    }else{            //closing
       if(s.top() == '('){   //duplicate
        return true;    
       }

       while(s.top() != '('){
        s.pop();
       }
       s.pop();
    }
}
return false;
}
int main(){
    string str1 = "((a+b))";
    string str2 = "((a+b) + (a+b))";
   cout<<isDuplicate(str1)<<endl;
   cout<<isDuplicate(str2)<<endl;

    return 0;
}

// //TC : O(n)
// //SC : O(n)    (stack)

