#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node *next;

    Node(int data1){
        data=data1;
        next=NULL;
    }
};
int main(){
    Node *node1=new Node (5);
    
  
    cout<<node1->data<<" ";
    cout<<node1->next<<" ";
}


// struct Node{
//     int data;
//     Node*next;

//     //constructor
//     Node(int data1){
//         data=data1;
//         next=NULL;
//     }
// };

// int main(){
//     Node * node1=new Node(25);
//     Node * node2=new Node(50);

//     node1 -> next = node2;
//     cout<<node1->data<<" ";
//     cout<<node1->next<<endl;
//     cout<<node2->data<<endl;

//     return 0;
// }