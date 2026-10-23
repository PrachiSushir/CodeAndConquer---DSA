#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string, int>m;
    m["China"] = 150;
    m["India"] = 150;
    m["Nepal"] = 10;
    m["US"] = 50;


    // print
 for(pair<string, int>country : m){
    cout<<country.first<<" , "<<country.second<<endl;
 }
 cout<<"-----------------------\n";
    // count
    if(m.count("Nepal")){
        cout<<"Nepal exists"<<endl;
    }else{
        cout<<"Nepal doesn't exists"<<endl;
    }
 cout<<"-----------------------\n";
    // erase
    m.erase("Nepal");
     if(m.count("Nepal")){
        cout<<"Nepal exists"<<endl;
    }else{
        cout<<"Nepal doesn't exists"<<endl;
    }
cout<<"-----------------------\n";
    // key is unique val can be change

    m["Nepal"] = 200;
    cout<<m["Nepal"]<<endl;
    return 0;
}