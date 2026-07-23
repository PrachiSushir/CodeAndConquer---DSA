// // making pair

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>start = {0, 1, 2};
//     vector<int>end = {9, 2, 4};
//     vector<pair<int, int>>activity(3, make_pair(3, 0));
//     activity[0] = make_pair(0,9);
//     activity[1] = make_pair(1,2);
//     activity[2] = make_pair(2,4);

//     for(int i = 0; i<activity.size(); i++){
//         cout<<"A"<<i<< " : " <<activity[i].first<<","<<activity[i].second<<endl;
//     }
//     return 0;
// }


// sorting in pair values

// making pair

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int>p1, pair<int,int>p2){   //taking two pairs from the vec
    return p1.second<p2.second;  //ascending order (on the basis of end)

}
int main(){
    vector<int>start = {0, 1, 2};
    vector<int>end = {9, 2, 4};
    vector<pair<int, int>>activity(3, make_pair(3, 0));
    activity[0] = make_pair(0,9);
    activity[1] = make_pair(1,2);
    activity[2] = make_pair(2,4);

    for(int i = 0; i<activity.size(); i++){
        cout<<"A"<<i<< " : " <<activity[i].first<<","<<activity[i].second<<endl;
    }

    // sort
    sort(activity.begin(), activity.end(), compare);
cout<<"-----------------sorted---------------"<<endl;
     for(int i = 0; i<activity.size(); i++){
        cout<<"A"<<i<< " : " <<activity[i].first<<","<<activity[i].second<<endl;
    }
    return 0;
}