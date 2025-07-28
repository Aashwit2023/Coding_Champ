#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node * left;
        Node * right;
    public : 
        Node(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};
class BST{
    public:
        Node* root;
    public:
        BST(){
            root = NULL;
        }
        Node* insert(Node* root, int key){
            if(!root){
                root = new Node(key);
                return root;
            }
            if(root->data > key){
                root->left = insert(root->left, key);
            }
            else if(root->data < key){
                root->right = insert(root->right, key);
            }
            return root;
        }        
};
void display(Node* root){
    if(!root){
        return ;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
int main(){
    BST t;
    Node* root = NULL;
    int n;
    cout<<"Enter number of nodes"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int val ;
        cout<<"Insert Data for BST "<<i<<" ";
        cin>>val;
        root = t.insert(root, val);
    }
    // cout<<root->data;
    display(root);
    cout<<endl;
    return 0;
}