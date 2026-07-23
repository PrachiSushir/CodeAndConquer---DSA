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

void inorderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    // left
    inorderTraversal(root->left);

    // root
    cout<<root->data<<" ";

    // right
    inorderTraversal(root->right);
}
 
int main(){
    vector<int>nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
Node* root = buildTrees(nodes);
cout<<"root = "<<root->data<<endl;

inorderTraversal(root);
cout<<endl;

    return 0;
}


// TC : O(n);