// #include<iostream>
// #include<vector>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//    this->data = data;
//    left=right=NULL;
//     }
   
// }; 
// static int idx = -1;
// Node* buildTrees(vector<int>nodes){
//     idx++;
//     if(nodes[idx] == -1){
//         return NULL;
//     }
//    Node* newNode = new Node(nodes[idx]);
//    newNode->left = buildTrees(nodes);
//    newNode->right = buildTrees(nodes);
//    return newNode;
// }

// void kthHelper(Node* root, int k, int currLevel){
// //    basecase
// if(root == NULL){
//     return;
// }
//     if(currLevel == k){
//         cout<<root->data<<" ";
//         return;
//     }
//     kthHelper(root->left, k, currLevel+1);
//      kthHelper(root->right, k, currLevel+1);
// }
// void kthLevel(Node* root, int k){
//     kthHelper(root, k, 1);
//     cout<<endl;
// }
// int main(){
//     vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
//     Node* root = buildTrees(nodes);
//     cout<<"root : "<<root->data<<endl;
//     int k = 3;
//     kthLevel(root, k);
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
  left=right=NULL;
    }
};

static int idx = -1;
Node* buildTree(vector<int>nodes){
    idx++;

    if(nodes[idx] == -1){
        return NULL;
    }
Node* newNode = new Node(nodes[idx]);
newNode->left = buildTree(nodes);
newNode->right = buildTree(nodes);
 
return newNode;
}

void kthLevelNode(Node* root, int k, int currLevel){
    if(root==NULL){
        return;
    }

    if(currLevel==k){
        cout<<root->data<<" ";
    }
    kthLevelNode(root->left, k, currLevel+1);
    kthLevelNode(root->right, k, currLevel+1);

}

int main(){
    vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    int k = 3;
    int currLevel = 1;
 kthLevelNode(root, k, currLevel);

    return 0;
}