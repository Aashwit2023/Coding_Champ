#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node * addr;
    
    Node(int data1){
        data=data1;
        addr=nullptr;
    }
};
Node* convertArr2Linkedlist(vector<int>vec){
    Node*head=new Node(vec[0]);
    Node*mover=head;

    for(int i=1;i<vec.size();i++){
        Node*temp=new Node(vec[i]);
        mover->addr=temp;
        mover=temp;
    }
    return head;
}

void display(Node * first){
    Node* temp=first;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        //agle vale pai  jane ke liye(node ko jodne ka kam krta hai)
        temp=temp->addr;
    }
}
Node * begin_insertion(Node * first){
    int a;
    cout<<"Enter Element to Insert at Begining : "<<endl;
    cin>>a;
    Node * temp=new Node(a);
    temp->addr=first;
    first=temp;
    cout<<"Linkedlist After Insertion at begin : "<<endl;
    return first;
}
void end_insertion(Node*first){
    int a;
    cout<<"Enter Element to Insert at Last : "<<endl;
    cin>>a;
    Node* temp=first;
    while(temp->addr!= NULL){
        temp=temp->addr;
    }
        Node* tail=new Node(a);
        temp->addr=tail;  
        cout<<"LinkedList after adding last Node : "<<endl;
}

Node* begin_deletion(Node*head){
    if(head==NULL || head->addr==NULL){
        delete(head);
    }
    Node*temp=head;
    head=head->addr;
    delete(temp);
    return head;
}

Node *RandomDeletion(int pos,Node*head){
    if(pos==1){
        Node*temp=head;
        head=head->addr;
        free(head);
        return head;
    }
    cout<<"First index is Not  deleted."<<endl;
    int count=1;
    // cout<<head->data<<endl;
    Node *temp=head;
    // cout<<temp->data<<endl;
    while(temp->addr!= NULL){
        count++;
        temp=temp->addr;
    }
    cout<<count<<endl;
    temp=head;
    if(count==pos){
        while(temp->addr->addr!= NULL){
            temp=temp->addr;
        }
        Node *mover=temp->addr;
        temp->addr=NULL;
        free(mover);
        return head;
    }
    cout<<"Last Node is not Deleted."<<endl;
    
    // Node *temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->addr;
    }
    Node *p=temp->addr;
    Node *mover=p;
    mover=mover->addr;
    temp->addr=mover;
    free(p);
    return head;
}

int main(){
    int n;
    cout<<"Enter number of Elements "<<endl;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        int a;
        cout<<"Enter " << i <<" th"<<endl;
        cin>>a;
        vec[i]=a;
    }

    Node* first= convertArr2Linkedlist(vec);

    cout<<"Our Linked List is : "<<endl;
    display (first);
    cout<<endl;
    
    first=begin_insertion(first);
    display(first); 
    cout<<endl;

    end_insertion(first);
    display(first);
    cout<<endl;

    first=begin_deletion(first);
    display(first);

    cout<<"Now deletion Start."<<endl;
    first=RandomDeletion(6,first);
    display(first);
    return 0;


}





