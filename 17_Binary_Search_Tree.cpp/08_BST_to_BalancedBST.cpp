// #include<iostream>
// #include<vector>
// using namespace std;
// class Node{
//     public: 
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data = data;
//         left = right = NULL;

//     }
// };

// Node* insert(Node* root, int val){
// if(root == NULL){
//     root = new Node(val);
//     return root;
// }
// if(val < root->data){   //left subtree
//   root->left = insert(root->left, val);
// }else{
//     root->right = insert(root->right, val);
// }
// return root;
// }

// Node* balancedBSTfromVec(vector<int> &nodes, int st, int end){
//     if(st>end){
//         return NULL;
//     }
// int mid = st + (end-st)/2;

// Node* curr = new Node(nodes[mid]);
// curr->left = balancedBSTfromVec(nodes, st, mid - 1);
// curr->right = balancedBSTfromVec(nodes, mid+1, end);

//  return curr;
// }
  
// void getInorder(Node* root, vector<int> &nodes){

//      if(root == NULL){
//         return;
//     }
//     // left
//    getInorder(root->left, nodes);

//     // pushback
//     nodes.push_back(root->data);

//     // right
//     getInorder(root->right, nodes);

   
// }

// Node* balancedBST(Node* root){
// //   get inorder
// vector<int> nodes;
// getInorder(root, nodes);

//  root = balancedBSTfromVec(nodes, 0, nodes.size()-1);
//  return root;
// }

// void preOrder(Node* node){
//   if(node == NULL){
//     return;

//   }
//   cout<<node->data<<" ";
//   preOrder(node->left);
//   preOrder(node->right);
//  return; 
// }
// int main(){
//    Node* root = new Node(6);
//    root->left = new Node(5);
//    root->left->left = new Node(4);
//    root->left->left->left = new Node(3);

//    root->right = new Node(7);
//    root->right->right = new Node(8);
//    root->right->right->right = new Node(9);
//    root = balancedBST(root);
//    preOrder(root);
//    cout<<endl;

   
//     return 0;
// }

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


void preOrderTraversal(Node* node){
  if(node == NULL){
    return;

  }
  cout<<node->data<<" ";
  preOrderTraversal(node->left);
  preOrderTraversal(node->right);
 
}
Node* buildBSTfromVec(vector<int>vec, int st, int end){
    if(st>end){
        return NULL;
    }
int mid = st + (end-st)/2;

Node* curr = new Node(vec[mid]);
curr->left = buildBSTfromVec(vec, st, mid - 1);
curr->right = buildBSTfromVec(vec, mid+1, end);

 return curr;

}

 void buildBST(Node* root, vector<int> &vec){
  if(root == NULL){
    return;
  }

  buildBST(root->left, vec);
  vec.push_back(root->data);
  buildBST(root->right, vec);

 
 return;
 }

int main(){
   Node* root = new Node(6);
   root->left = new Node(5);
   root->left->left = new Node(4);
   root->left->left->left = new Node(3);

   
   root->right = new Node(7);
   root->right->right = new Node(8);
   root->right->right->right = new Node(9);
   vector<int>vec;
 buildBST(root, vec);
 Node* root2 = buildBSTfromVec(vec,0,vec.size()-1);
 preOrderTraversal(root2);
    return 0;
}