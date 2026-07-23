// //=====Creating a vector===============

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vector1;
//     vector<int>vector2={1,2,3,4,5};
//     vector<int>vector3(5, -1);  //5 is size and -1 is initialised value

//     for(int i = 0; i<vector2.size(); i++){
//         cout<<vector2[i]<<" ";
//     }
//     // cout<<vector1.size()<<endl;
//     // cout<<vector2.size()<<endl;
//     // cout<<vector3.size()<<endl;

//     return 0;
// }

// //===================Memory allocation in memory=================

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vector = {1,2,3,4,5};
   cout<<"size: "<<vector.size()<<endl;
   cout<<"Capacity : "<<vector.capacity()<<endl;

   vector.push_back(4);
   cout<<"size: "<<vector.size()<<endl;
   cout<<"Capacity : "<<vector.capacity()<<endl;   // capacity is being double

    return 0;
}
