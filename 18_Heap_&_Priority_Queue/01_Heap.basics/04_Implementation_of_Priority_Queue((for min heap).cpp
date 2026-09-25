#include<iostream>
#include<vector>

using namespace std;
class Heap{
    vector<int> vec;

    public:

    void push(int val){
        // step 1 : insert
        vec.push_back(val);    //O(1)

        // step 2 : fix heap
           
        int x = vec.size()-1;    //O(1)
        int parI = (x-1)/2;

        while(parI>=0 && vec[x] < vec[parI]){   //in worst case TC: O(log n)
            swap(vec[x], vec[parI]);
            x = parI;
            parI = (x-1)/2;
        }

    
    }
    
    void  heapify(int i){

        if(i >= vec.size()){
            return;
        }
  int l = 2 * i + 1;
  int r = 2 * i + 2;

  int minIdx = i;

  if(l < vec.size() && vec[l] < vec[minIdx]){
    minIdx = l;
  }
   if(r < vec.size() && vec[r] < vec[minIdx]){
    minIdx = r;
  }

 

 if(minIdx != i) {
    swap(vec[i], vec[minIdx]);
    heapify(minIdx);
}
  }
    void pop(){
    //   step1 : 
    swap(vec[0], vec[vec.size()-1]);

    // step 2 : 
    vec.pop_back();

    // step 3:
    heapify(0);
    }
   int top(){
    return vec[0];
   }

   bool empty(){
    return vec.size() == 0;
   }

};
int main(){
   Heap heap;
   heap.push(9);
   heap.push(4);
   heap.push(8);
   heap.push(1);
   heap.push(2);
   heap.push(5);

   while(!heap.empty()){
    cout<<"Top : "<<heap.top()<<endl;
    heap.pop();
   }
  
    return 0;
}