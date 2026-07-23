#include<iostream>
#include<vector>
using namespace std;
int selectActivity(vector<int>start, vector<int>end){
    int count = 1;
    int currEndTime = end[0];

    for(int i = 1; i<end.size(); i++){
        if(start[i]>=currEndTime){
            count++;
            currEndTime = end[i];
        }
    }
    return count;
}
int main(){
    vector<int>start = {1, 3, 0, 5, 8, 5};
    vector<int>end = {2, 4, 6, 7, 9, 9};
    cout<<selectActivity(start, end)<<endl;
    return 0;
}


// // //can also print the selected activity
// #include<iostream>
// #include<vector>
// using namespace std;
// int selectActivity(vector<int>start, vector<int>end){
//     cout<<"selecting A0\n";
//     int count = 1;
//     int currEndTime = end[0];

//     for(int i = 1; i<end.size(); i++){
//         if(start[i]>=currEndTime){
//             cout<<"selecting A"<<i<<endl;
//             count++;
//             currEndTime = end[i];
//         }
//     }
//     return count;
// }
// int main(){
//     vector<int>start = {1, 3, 0, 5, 8, 5};
//     vector<int>end = {2, 4, 6, 7, 9, 9};
//     cout<<selectActivity(start, end)<<endl;
//     return 0;
// }