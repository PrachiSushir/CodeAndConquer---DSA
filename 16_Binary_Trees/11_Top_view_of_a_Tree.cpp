#include<iostream>
#include<map>
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

void topView(Node* root){
    queue<pair<Node*, int>>Q;   //(node, HD)
    map<int, int>m;             //(HD, node->data)

    Q.push(make_pair(root, 0));
    while(!Q.empty()){
        pair<Node*, int> curr = Q.front();
        Q.pop();

        Node* currNode = curr.first;
        int currHD = curr.second;

        if(m.count(currHD) == 0){    //HD-> add in map
            m[currHD] = currNode->data;
        }

        if(currNode->left !=NULL){
            pair<Node*, int> left = make_pair(currNode->left, currHD - 1);
            Q.push(left);
        }

        if(currNode->right != NULL){
            pair<Node*, int> right = make_pair(currNode->right, currHD + 1);
            Q.push(right);
        }
    }

    for(auto it : m){
        cout<<it.second<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTrees(nodes);

    topView(root);
    return 0;
}