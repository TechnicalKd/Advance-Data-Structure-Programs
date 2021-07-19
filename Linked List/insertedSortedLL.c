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

void insert(struct node *p,int x){
    struct node *temp,*q=NULL;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;

    if(first==NULL){
        first = temp;
    }else{
        while(p && p->data<x){
            q=p;
            p = p->next;
        }
        if(p==first){
            temp->next = first;
            first = temp;
        }else{
        temp->next = q->next;
        q->next = temp;
        }
    }
}


int main(){
    int A[10] = {1,2,3,4,5};
    createLinkedList(A,10);
    insert(first,6);
    insert(first,8);
    insert(first,7);
    insert(first,9=);

    display(first);
    return 0;
}