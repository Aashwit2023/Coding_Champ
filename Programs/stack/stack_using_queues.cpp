#include<bits/stdc++.h>
using namespace std;

class st{
public:
    queue<int> Q;
    int data;
    int size;

    public:
    st(int size){
        this->size=size;
    }
    void push(int data){
        int s = Q.size();
        Q.push(data);
        for(int i=0 ; i<s ;i++){
            Q.push(Q.front());
            Q.pop();
        }      
    }
    int pop(){
        int a=Q.front();
        Q.pop();
        return a;
    }
    int top(){
        cout<<Q.front();
    }

};
int main(){
    st s(4);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    // s.pop();

    s.top();
    // for(int i=0 ;i<s.size();i++){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
}