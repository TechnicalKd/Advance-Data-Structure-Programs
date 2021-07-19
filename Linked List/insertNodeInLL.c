#include<stdlib.h>
#include<stdio.h>

struct node 
{
    int data;
    struct node * next;
}*first=NULL;

void createLinkedList(int A[],int n){
    struct node * last,*temp;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i=1;i<n;i++){
        temp = (struct node *)malloc(sizeof(struct node));
        temp->next = NULL;
        temp->data = A[i];
        last->next = temp;
        last = temp;
    }
}

void display(struct node * p){
    while(p!=NULL){
        printf("  %d ",p->data);
        p = p->next;
    }
}

int count(struct node *p){
    int count  = 0;
    while(p!=NULL){
        count++;
        p = p->next;

    }
    return count;
}

void insert(struct node *p,int index,int x){

    struct node * temp;

    if(index <0 && index > count(p)){
        return;
    }

    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;

    if(index==0){
        temp->next = first;
        first = temp;
    }else if(index>0)
    {
         for(int i=0;i<index-1;i++){
             p = p->next;
         }
         temp->next = p->next;
         p->next = temp;
         
    }
}


int main(){
    int A[5] = {1,2,4,5};
    createLinkedList(A,5);
    insert(first,1,10);
    display(first);
    return 0;
}