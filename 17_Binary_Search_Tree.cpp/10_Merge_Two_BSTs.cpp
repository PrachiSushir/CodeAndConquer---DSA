#include<iostream>
#include<vector>
using namespace std;
class Node{
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;

    }
};

Node* insert(Node* root, int val){
if(root == NULL){
    root = new Node(val);
    return root;
}
if(val < root->data){   //left subtree
  root->left = insert(root->left, val);
}else{
    root->right = insert(root->right, val);
}
return root;
}

void preOrderTraversal(Node* node){
  if(node == NULL){
    return;

  }
  cout<<node->data<<" ";
  preOrderTraversal(node->left);
  preOrderTraversal(node->right);
 return; 
}

Node* balancedBSTfromVec(vector<int> &nodes, int st, int end){
    if(st>end){
        return NULL;
    }
int mid = st + (end-st)/2;

Node* curr = new Node(nodes[mid]);
curr->left = balancedBSTfromVec(nodes, st, mid - 1);
curr->right = balancedBSTfromVec(nodes, mid+1, end);

 return curr;
}
void getInorder(Node* root, vector<int> &nodes){

     if(root == NULL){
        return;
    }
    // left
   getInorder(root->left, nodes);

    // pushback
    nodes.push_back(root->data);

    // right
    getInorder(root->right, nodes);

   
}
  
Node* mergeBSTs(Node* root1, Node* root2){
    vector<int> nodes1;
    vector<int> nodes2;
    vector<int> merged;

    getInorder(root1, nodes1);
    getInorder(root2, nodes2);

    int i = 0, j = 0;
while(i<nodes1.size() && j<nodes2.size()){
    if(nodes1[i] < nodes2[j]){
      merged.push_back(nodes1[i++]);
    }else{
      merged.push_back(nodes2[j++]);
    }
}
   while(i<nodes1.size()){
     merged.push_back(nodes1[i++]);
   }
    
   while(j<nodes2.size()){
     merged.push_back(nodes2[j++]);
   }
 return balancedBSTfromVec(merged, 0, merged.size()-1);
}
int main(){
    Node* root1 = new Node(2);
    root1->left = new Node(1);
    root1->right = new Node(4);

    Node* root2 = new Node(9);
    root2->left = new Node(3);
    root2->right = new Node(12);


    Node* root = mergeBSTs(root1, root2);
     preOrderTraversal(root);
    cout<<endl;
    return 0;
}
