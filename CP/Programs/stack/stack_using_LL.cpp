#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    /* data */
    int data;
    Node *next;
public:
    Node(int data1){
        data = data1;
        next = NULL;
    }
};


class stack_using_LL
{
private:
    /* data */
    Node *top;
    int size;
public:
    stack_using_LL(){
        top = NULL;
        size = 0;
    }

    //Push implemnentation
    void push(int data){
        Node *temp = new Node(data);
        temp->next = top;
        top = temp;
        size++;
    }

    //pop implementatio
    int pop(){
        if(top == NULL){
            cout << "Stack is UnderFlow. "<<endl;
            return 0;
        }
        Node *temp = top;
        int popval = top->data; 
        top = top->next;
        delete(temp);
        size--;
        return popval;
    }

    //isEmpty 
    bool isEmpty(){
        return top == NULL;
    }

    //getTop
    int getTop(){
        return top->data;
    }
};
int main(){
    stack_using_LL Stack;

    Stack.push(10);
    Stack.push(15);
    Stack.push(20);
    Stack.push(25);
    Stack.push(30);
    Stack.push(35);

    cout<<Stack.pop()<<endl;
    cout<<Stack.pop()<<endl;
    cout<<Stack.pop()<<endl;

    cout<<Stack.getTop()<<endl;
    cout<<Stack.isEmpty()<<endl;
    

}


