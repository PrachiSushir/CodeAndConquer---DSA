
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

int count(Node* root){
    if(root ==NULL){
        return 0;
    }

    int leftCount = count(root->left);
     int rightCount = count(root->right);

     return leftCount + rightCount + 1;

}
int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTrees(nodes);
    cout<<"Count : "<<count(root)<<endl;
    return 0;
}