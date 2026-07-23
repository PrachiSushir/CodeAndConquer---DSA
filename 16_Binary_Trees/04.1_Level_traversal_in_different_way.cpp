#include<iostream>
#include<vector>
#include<queue>
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

void levelOrderTraversal(Node* root){

    if(root == NULL){
        return;
    }
 queue<Node*>Q;
 Q.push(root);
 Q.push(NULL);

 while(!Q.empty()){
  Node* curr = Q.front();
  Q.pop();

  if(curr == NULL){

    cout<<endl;
    if(Q.empty()){
        break;
    }
    Q.push(NULL);   //to track next line
  } else{
    cout<<curr->data<<" "; 

  if(curr->left != NULL){
    Q.push(curr->left);
  }
  if(curr->right != NULL){
    Q.push(curr->right);
  }
 }
 
  }
  
}


 
int main(){
    vector<int>nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
Node* root = buildTrees(nodes);


levelOrderTraversal(root);
cout<<endl;

    return 0;
}


// TC : O(n);
// SC : O(n);   due to Queue