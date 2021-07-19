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

int isLoop(struct node *f){

struct node *p,*q;
p=q=f;

do{
    p = p->next;
    q = q->next;
    q = q?q->next:q;
}while( p && q && p!=q);

if(p==q){
    return true;
}else
    return false;


}

int main(){
    struct node *t1,*t2;
    int A[5] = {1,2,3,4,5};
    createLinkedList(A,5);

    // t1 = first->next->next;
    // t2 = first->next->next;
    // t2->next = t1;

    printf("%d",isLoop(first));

    return 0;
}