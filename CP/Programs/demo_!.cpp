#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node * next;
    Node(int data1){
        data = data1;
        next=0;
    }
};

int main(){
    Node * y=new Node(5);
    Node * x=new Node(6);
    Node * z=new Node(7);
    Node * a=new Node(8);
    Node * b=new Node(9);

    
    y->next=x;
    x->next=z;
    z->next=a;
    a->next=b;

    Node *temp=y;
    cout<<x;

    while(temp != 0){
        cout<< temp->data<<"  ";
        cout<< temp->next<<endl;
        temp=temp->next;
    }

    
    


    return 0;


    // unordered_map<string,int>mp;
    // vector<string>vec={"amar","Ashwit","Raj","Sahil","Abhi","Ashwit","Abhi","Ashwit"};
    // for(auto &it : vec){
    //     mp[it]++;
    // }
    // for(auto &it:mp){
    //     // cout<<it.first<< " "<<it.second<<endl;
    //     if(it.second>1){
    //         cout<<it.first<<" "<<it.second<<endl;
    //     }
    // }
    // return 0;
}