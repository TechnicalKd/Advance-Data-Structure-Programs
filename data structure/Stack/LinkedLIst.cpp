#include<iostream>
#include<stdlib.h>
using namespace std;
class Node 
{
    public:
    int data;
    Node * next;
};

class stack
{
    private:
    Node * top;
    public:
    stack(){
        top=NULL;
    }
    void push(int x);
    int  pop();
    void Display();
};

void stack::push(int x){
    Node *temp = new Node;
    if(temp==NULL){
        cout<<"Stack is Full";
    }else{
        temp->next = top;
        temp->data =x;
        top = temp;
    }
}

int stack::pop(){
    int x=-1;
    if(top==NULL){
        cout<<"Stack is Empty";
    }else{
        Node *temp = top;
        x = top->data;
        top = top->next;
        delete temp;
    }
    return x;
}

void stack::Display(){
    Node *p=top;
    while(p!=NULL){
        cout<<" "<<p->data; 
        p = p->next;
    }

}

int main(){
    stack stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);

    printf("%d\n",stk.pop());

    stk.Display();
    return 0;
}
