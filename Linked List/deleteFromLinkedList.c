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

void deleted(struct node *p,int pos){
    struct node *temp,*q;
    if(pos<0 && pos>count(p)){
       printf("OUT of index");
    }else if(pos==0){
        first = first->next;
        free(p);
        printf("first element Deleted Successfully");
    }else if(pos>1){
        int i;
        for(i=0;i<pos-1;i++){
            q=p;
            p= p->next;
        }
        q->next = p->next;
        free(p);
    }
}


int main(){
    int A[5] = {1,2,3,4,5};
    createLinkedList(A,5);
    deleted(first,4);
    display(first);
    return 0;
}