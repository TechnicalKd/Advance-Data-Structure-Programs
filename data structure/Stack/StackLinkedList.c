#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*top=NULL;


void push(int x){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("Stack is full");
    }else{
        temp->data = x;
        temp->next = top;
        top = temp;
    }
}
int pop()
{
    struct node *t;
    int x=-1;
    if(top==NULL)
        printf("Stack is Empty\n");
    else{        
        t=top;
        top=top->next;        
        x=t->data;
        free(t);
}
return x;
}



void display(){
    struct node *p;
    p=top;
    while(top!=NULL){
        printf("  %d",top->data);
        top = top->next;
    }
    printf("\n");
}

int main(){

    push(10);
    push(20);
    push(30);
    push(40);

    display();

    printf("%d",pop());
    return 0;
}