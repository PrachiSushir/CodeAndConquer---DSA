#include<iostream>
using namespace std;
int sum(int a, int b){
    int sum = a + b;
    return sum;
}
int sum(double a, double b){
    int sum = a + b;
    return sum;
}
int main(){
    cout<<sum(2,3)<<endl;
    cout<<sum(2.5,3.5)<<endl;

    return 0;
}