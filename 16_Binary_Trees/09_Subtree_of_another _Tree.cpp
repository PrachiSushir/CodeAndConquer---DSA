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


bool isIdentical(Node* root1, Node* root2){

    // basecase
     if(root1 == NULL && root2 == NULL){
        return true;
    }else if(root1 == NULL || root2 == NULL){
        return false;
    }
    if(root1->data != root2->data){
        return false;
    }

    return isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right);
}
bool isSubtree(Node* root, Node* subRoot){
    // basecase
    if(root == NULL && subRoot == NULL){
        return true;
    }else if(root == NULL || subRoot == NULL){
        return false;
    }

    if(root->data == subRoot->data){
        if(isIdentical(root, subRoot)){
            return true;
        }
    }
    int isLeftSubtree = isSubtree(root->left, subRoot);
    if(!isLeftSubtree){
        return isSubtree(root->right, subRoot);
    }
   return true;
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTrees(nodes);
    Node* subRoot = new Node(2);
    subRoot->left = new Node(4);
    subRoot->right = new Node(5);
    cout<<isSubtree(root, subRoot)<<endl;
    return 0;
}
