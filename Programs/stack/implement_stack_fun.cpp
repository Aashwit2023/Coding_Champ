#include<bits/stdc++.h>
using namespace std;
const int size = 5;


class stack_impl{

    private :
        int top = -1;
        int st[size];
        
    public :
        int push(int data){
            if(top + 1 == size){
                cout<<"Stack Overflow. \n";
                return 0;
            }   
        top++;
        return st[top]=data;
        
        }

        int pop(){
            if(top == -1){
                cout<<"Stack Underflow. \n";
                return  0 ;
            }
            int popped_element=st[top];
            top--;
            return popped_element;
        }
        int peek(){
            if(top == -1){
                cout<<"Stack is Empty.\n";
            }
            return st[top];
        }
        bool isEmpty(){
            return top == -1;
        }
        bool isFull(){
            return top+1 == size;
        }

};
int main(){
    //create an Object
    stack_impl st;
    // Push an Element in the Stack
    // st.push(5);
    // st.push(6);
    // st.push(7);
    // st.push(8);
    // st.push(9);

    // its shows the Overflow Statement
    // st.push(10);
    // st.push(11);
    // Pop the Element in Stack
    // cout<<"Popped Element is : "<<st.pop()<<endl;
    
    

    // int j = 0;
    // while(true){
    //     int val;
    //     cout<<"Enter an "<<j<<"th Element is : ";
    //     cin>>val;
    //     st.push(val);
    //     j++;
    //     if(st.isFull()){
    //         cout<<"Your Stack is Full. \n";
    //         break;
    //     }
        
    // }

    // Popped All Elements in the stack
    // int i=size-1;
    // while(!st.isEmpty()){
    //     cout<<"Popped "<<i<<"th Element is : "<<st.pop()<<endl;
    //     i--;
    // }
}