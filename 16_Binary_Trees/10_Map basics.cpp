#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
// creating map
map<int, string>m;

// inserting in a map
m[101] = "Rahul";
m[110] = "shital";
m[132] = "raju";

// access val using key
cout<<m[110]<<endl;

// is any exists or not
cout<<m.count(101)<<endl;

// override
m[110] = "suhani";
cout<<m[110]<<endl;
    return 0;
}