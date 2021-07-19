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

void reverse(struct node *p){
    int *A,i=0;
    struct node *q=p;
    A = (int *)malloc(sizeof(int)*count(p));
    while(q!=NULL){
        A[i] = q->data;
        q = q->next; 
        i++;
    }
    q= p;
    i--;
    while(q!=NULL){
        q->data = A[i];
        q = q->next;
        i--;
    }
}

void reverse2(struct node *p){
    struct node *r=NULL,*q=NULL;
    while(p!=NULL){
        r = q;
        q  = p;
        p = p->next;
        q->next =r;
    }  
    first = q;
}


int main(){
    int A[5] = {1,2,3,4,5};
    createLinkedList(A,5);
    reverse2(first);
    
    display(first);
    return 0;
}