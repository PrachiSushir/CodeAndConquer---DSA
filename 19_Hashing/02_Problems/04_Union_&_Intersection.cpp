#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void getUnion(vector<int> arr1, vector<int> arr2){
  unordered_set<int>s;
  
  for(int ele : arr1){
   s.insert(ele);
  }

  for(int ele : arr2){
   s.insert(ele);
  }

  for(int el : s){
   cout<<el<<" ";
  }
  cout<<endl;
}

void getIntersection(vector<int> arr1, vector<int> arr2){
    unordered_set<int>s;

    for(int el : arr1){
        s.insert(el);
    }

    for(int el : arr2){
        if(s.find(el) != s.end()){  //found
            cout<<el<<" ";
            s.erase(el);
        }
    }
    cout<<endl;
}
int main(){
vector<int> arr1 = {7, 3, 9};
vector<int> arr2 = {6, 3, 9, 2, 9, 4};
cout<<"Union : ";
getUnion(arr1, arr2);
getIntersection(arr1, arr2);
return 0;
}

// Union:  TC : O(n1 + n2)
// Intersection: TC : O(n)