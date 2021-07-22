#include<stdio.h>
#include<stdlib.h>

struct node{
    char data;
    struct node *next;
}*top=NULL;


void push(char x){
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
char pop()
{
    struct node *t;
    char x=-1;
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

int isBalanced(char *exp){
   int i;
   for(i=0;exp[i]!='\0';i++){
       if(exp[i]=='('){
           push(exp[i]);
       }else if(exp[i]==')'){
           if(top==NULL){
               return 0;
           }
           pop();
       }
       
   } 
   if(top==NULL){
           return 1;
       }else{
           return 0;
       }
}

int main(){

    char exp[] = "(a+b)";
    printf("%d",isBalanced(exp));

    //display();

    //printf("%d",pop());
    return 0;
}