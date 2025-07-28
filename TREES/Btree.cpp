#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        Node * Lchild;
        int data;
        Node * Rchild;
    public:
        Node(int data){
            this->data = data;
            Lchild = NULL;
            Rchild = NULL;
        }
};
class Tree{
    public:
        Node * root;
    public:
        Tree(){
            root = NULL;
        }
        Node * createtree(){
            Node *q, *t;
            queue<Node *>Q;
            int val;
            cout<<"Enter the root Data : "<<endl;
            cin>>val;
            root = new Node(val); 
            Node * temp = root;
            Q.push(root);
            while(!Q.empty()){
                q = Q.front();
                cout<<"Enter Lchild (-1 for no child : )"<<endl;
                cin>>val;
                if(val!=-1){
                    t = new Node (val);
                    q->Lchild = t;
                    Q.push(t); 
                }
                cout<<"Enter Rchild (-1 for no child : )"<<endl;
                cin>>val;
                if(val!=-1){
                    t = new Node (val);
                    q->Rchild = t;
                    Q.push(t); 
                }
                Q.pop();
            }
            return temp;
        }
};
void level_order(Node * root){
     queue<Node*>que;
    cout<<root->data;
    que.push(root);
    while(!que.empty()){
        Node *p=que.front();
        que.pop();
        if(p->Lchild){
            cout<<p->Lchild->data;
            que.push(p->Lchild);
        }
        if(p->Rchild){
            cout<<p->Rchild->data;
            que.push(p->Rchild);
        }
    }
}
void preorder(Node * root){
    if(root == NULL){
        return;
    }
    cout<<root->data;
    preorder(root->Lchild);
    preorder(root->Rchild);
}
void postorder(Node * root){
    if(root == NULL){
        return;
    }
    postorder(root->Lchild);
    postorder(root->Rchild);
    cout<<root->data;
}void inorder(Node * root){
    if(root == NULL){
        return;
    }
    inorder(root->Lchild);
    cout<<root->data;
    inorder(root->Rchild);
}
void iteration_preorder(Node * root){
    stack<Node *>st;
    Node *t = root;
    while(t!=NULL || !st.empty()){
        if(t != NULL){
            cout<<t->data;
            st.push(t);
            t = t->Lchild;
        }
        else{
            t = st.top();
            st.pop();
            t = t->Rchild;
        }
    }
}
void interation_inorder(Node * root){
    stack<Node *>st;
    Node * t = root;
    while(t != NULL || !st.empty()){
        if( t != NULL){
            st.push(t);
            t = t->Lchild;
        }
        else {
            t = st.top();
            st.pop();
            cout<<t->data;
            t = t->Rchild;
        }
    }
}
// void iteration_postorder(Node * root){
//     stack<Node *>st;
//     Node * t = root;
//     long long temp;
//     while(t != NULL || !st.empty()){
//         if(t != NULL){
//             st.push(t);
//             t = t->Lchild;
//         }
//         else{
//             temp = (long long)st.top();
//             st.pop();
//             if(temp > 0){
//                 st.push((Node *)-temp);
//                 t = ((Node *)(uintptr_t)temp)->Rchild;
//             }
//             else{
                
//                 cout<<((Node *)(uintptr_t)temp)->data;
//                 t = nullptr;
//             }
//         }
//     }
// }
void iteration_postorder(Node *root) {
    stack<long long> st;
    Node *t = root;
    long long temp;
    
    while (t != NULL || !st.empty()) {
        if (t != NULL) {
            st.push((long long)(uintptr_t)t); // store address as positive
            t = t->Lchild;
        } else {
            temp = st.top();
            st.pop();
            if (temp > 0) {
                st.push(-temp); // mark as visited
                t = ((Node *)(uintptr_t)temp)->Rchild;
            } else {
                Node *visited = (Node *)(uintptr_t)(-temp);
                cout << visited->data << " ";
                t = NULL;
            }
        }
    }
}
int countNode(Node * root){
    if(root != NULL){
        if(root->Lchild != NULL && root->Rchild!= NULL){
            int x =countNode(root->Lchild);
            int y = countNode(root->Rchild);
            return x+y+1;
        }
    }
    return 0;
}
int two_D_N(Node * root){
    if(root != NULL){
        int x = two_D_N(root->Lchild);
        int y = two_D_N(root->Rchild);
        if(root->Lchild != NULL && root->Rchild!= NULL){
            return x+y+1;
        }
        else{
            return x+y;
        }
        // else if(root->Lchild != NULL){
        //     two_D_N(root->Lchild);
        // }
        // else if(root->Rchild != NULL){
        //     two_D_N(root->Rchild);
        // }
    }
    return 0;
}
int one_degree_nodes(Node * root){
    if(root != NULL){
        int x = one_degree_nodes(root->Lchild);
        int y = one_degree_nodes(root->Rchild);
        if((root->Lchild != NULL && root->Rchild == NULL) || (root->Lchild == NULL && root->Rchild != NULL)){
            return x+y+1;
        }
        else{
            return x+y;
        }
    }
    return 0;
}
int Height_tree(Node * root){
    if(!root){
        return 0;
    }
    int x = Height_tree(root->Lchild);
    int y = Height_tree(root->Rchild);
    if(x > y){
        return x+1;
    }
    else{
        return y+1;
    }
    return 0;
}
int main(){
    Tree t;
    Node * root=t.createtree();
    // level_order(root);
    // cout<<endl;
    // preorder(root);
    // cout<<endl;
    // postorder(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;
    // // iteration_preorder(root);
    // interation_inorder(root);
    // iteration_postorder(root);
    // cout<<endl;
    // cout<<countNode(root);
    // cout<<one_degree_nodes(root);
    int r = Height_tree(root);
    cout<<r-1;
}