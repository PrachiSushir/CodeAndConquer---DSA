#include<iostream>
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

Node* buildBST(int arr[], int n){
Node* root = NULL;

 for(int i = 0; i<n; i++){
    root = insert(root, arr[i]);
 }
 return root;
}

 void printRange(Node* root, int st, int end){

    if(root == NULL){
        return;
    }
    if(st <= root->data && root->data <= end){   //case1 
        printRange(root->left, st, end);
        cout<<root->data<<" ";
        printRange(root->right, st, end);
    }else if(root->data<st){   //case2
        printRange(root->right, st, end);
    }else{   
                            // case 3
        printRange(root->left, st, end);
    }
 }
int main(){
    int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    Node* root = buildBST(arr, 9);
    printRange(root, 5, 12);
    cout<<endl;
    return 0;
}

