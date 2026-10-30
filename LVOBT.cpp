#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x) : data(x) , left(nullptr), right(nullptr) {};
};
void leftView(Node* root,vector<int> &res, int level){
    if(root==nullptr) return;
    if(res.size() == level) res.push_back(root->data);
    leftView(root->left,res,level+1);
    leftView(root->right,res,level+1);
}
int main(){
    int v;
    cin >> v;
    if(v==-1) return -1;
    queue<Node*> q;
    Node* root = new Node(v);
    q.push(root);
    while(!q.empty()){
        Node* t = q.front();
        q.pop();
        if(!(cin >> v)) break;

        if(v!=-1){
            t->left = new Node(v);
            q.push(t->left);
        }
        if(!(cin >> v)) break;
        
        if(v!=-1){
            t->right = new Node(v);
            q.push(t->right);
        }
    }
    vector<int> res;
    leftView(root,res,0);
    
    for(int x : res) cout << x << " ";
    return 0;
}