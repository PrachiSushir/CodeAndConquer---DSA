#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;

    Node(int data){
      this->data = data;
      right=left = NULL;
    }

};


  static int idx = -1;
Node* buildTrees(vector<int> &nodes){
idx++;
 if(nodes[idx]==-1){
    return NULL;
 }
Node* newNode = new Node(nodes[idx]);

newNode->left = buildTrees(nodes);
newNode->right = buildTrees(nodes);

return newNode;
}

int height(Node* root){
 if(root == NULL){
    return 0;
 }

 int leftHt = height(root->left);
 int rightHt = height(root->right);
 int currHt = max(leftHt, rightHt)+1;
 return currHt;
}
pair<int, int>diameter(Node* root){   // O(n)
    if(root == NULL){
   return make_pair(0,0);
    }

    //(diam, ht)
    pair<int,int>leftInfo = diameter(root->left);    //(LD, LH)
    pair<int, int>rightInfo = diameter(root->right); //(RD, RH)

    int currDiam = leftInfo.second + rightInfo.second + 1;

    int finalDiam = max(currDiam, max(leftInfo.first, rightInfo.first));
    int finalHt = max(leftInfo.second, rightInfo.second) + 1;
 return make_pair(finalDiam, finalHt);

}
int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTrees(nodes);
    cout<<"Diameter = "<<diameter(root).first<<endl;
    return 0;
}
