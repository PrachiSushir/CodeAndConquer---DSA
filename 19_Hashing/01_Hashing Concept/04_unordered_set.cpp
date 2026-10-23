#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
//   duplicate values
// s.insert(1);
// s.insert(1);
// s.insert(1);
    cout<<s.size()<<endl;

    // find key
    if(s.find(3) != s.end()){
        cout<<"3 exists\n";
    }else{
         cout<<"3 doesn't exists"<<endl;
    }
cout<<"-----------------------\n";
    // erase
    s.erase(3);
    if(s.find(3) != s.end()){
        cout<<"3 exists\n";
    }else{
         cout<<"3 doesn't exists\n";
    }
    for(auto el : s){
        cout<<el<<" ";
        cout<<endl;
    }
    return 0;
}