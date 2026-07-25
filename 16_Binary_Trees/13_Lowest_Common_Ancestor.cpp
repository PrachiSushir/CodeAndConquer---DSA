/* Problem Statement:

 Given the root of a binary tree and two node values n1 and n2, find their Lowest Common Ancestor (LCA).
 The Lowest Common Ancestor is the deepest node in the tree that has both n1 and n2 as descendants (where a node can be a descendant of itself). */

 /*Algorithm (LCA using Root-to-Node Path)
1. Create two empty vectors path1 and path2.
2. Find the path from the root to node n1 and store it in path1.
3. Find the path from the root to node n2 and store it in path2.
4. Compare both paths from the beginning.
5. Continue while the corresponding nodes in both paths are the same.
6. The last common node in both paths is the Lowest Common Ancestor (LCA).
7. Return the LCA.*/

// Solution:

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

// bool rootToNodePath(Node* root, int n, vector<int> &path){  //O(n)
//     if(root == NULL){
//         return false;
//     }
//     path.push_back(root->data);
//     if(root->data == n){
//         return true;
//     }
//  cout<<root->data<<" ";
//     int isLeft = rootToNodePath(root->left, n, path);
//     int isRight = rootToNodePath(root->right, n, path);

//     // backtracking part
//     if(isLeft || isRight){
//         return true;
//     }
//     path.pop_back();
//     return false;
// }

// int LCA(Node* root, int n1, int n2){   // O(n)
//     vector<int>path1;
//     vector<int>path2;

//     rootToNodePath(root, n1, path1);
//     rootToNodePath(root, n2, path2);

//     int lca = -1;
//     for(int i= 0, j = 0; i<path1.size() && j<path2.size(); i++, j++){
//         if(path1[i] != path2[j]){
//     return lca;
//         }
//         lca = path1[i];
//     }
//  return lca;
// }

// int main(){
//     vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
//     Node* root = buildTrees(nodes);
   
//     int n1 = 3, n2 = 6;
//     cout<<"LCA : "<<LCA(root, n1, n2)<<endl;

//     return 0;
// }

// //TC: O(n)
// //SC: O(n) (vectors can occupy n size in worst case)



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
Node* buildTrees(vector<int>nodes){
    idx++;
    if(nodes[idx] == -1){
        return NULL;
    }
   Node* newNode = new Node(nodes[idx]);
   newNode->left = buildTrees(nodes);
   newNode->right = buildTrees(nodes);
   return newNode;
}

bool rootToNode(Node* root, int n, vector<int>&path){
    if(root == NULL){
    return false;
    }
   
    path.push_back(root->data);
    if(root->data == n){
        return true;
    }
   int isLeft = rootToNode(root->left, n, path);
   int isRight = rootToNode(root->right, n, path);

   if(isLeft || isRight){
    return true;
   }
   path.pop_back();
   return false;
}

int LCA(Node* root, int n1, int n2){
    vector<int>path1;
    vector<int>path2;

    rootToNode(root, n1, path1);
    rootToNode(root, n2, path2);

    int lca = -1;
    for(int i = 0, j = 0; i<path1.size() && j<path2.size(); i++, j++){
        if(path1[i] != path2[j]){
            return lca;
        }
       lca = path1[i];
    }
    return lca;
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTrees(nodes);
   
    int n1 = 4, n2 = 6;
    cout<<"LCA : "<<LCA(root, n1, n2)<<endl;

    return 0;
}

