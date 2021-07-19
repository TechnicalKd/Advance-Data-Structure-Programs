#include<stdlib.h>
#include<stdio.h>

struct node 
{
    int data;
    struct node * next;
}*first=NULL,*second=NULL,*third=NULL;

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

void createSecondLinkedList(int A[],int n){
    struct node * last,*temp;
    second = (struct node *)malloc(sizeof(struct node));
    second->data = A[0];
    second->next = NULL;
    last = second;

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


void concat(struct node *p,struct node *q){
    third = p;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next= q;
}

void merge(struct node *p,struct node *q){

    struct node *last;
    if(p->data < q->data){
        third=last=p;
        p= p->next;
        third->next =NULL;
    }else{
        third=last=q;
        q = q->next;
        third->next = NULL;
    }

    while(p && q){
        if(p->data < q->data){
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }else{
              last->next = q;
               last = q;
            q = q->next;
            last->next = NULL;  
        }
   if(p)last->next = p;
    if(q)last->next = q;
    }

    


}


int main(){
    int A[5] = {1,2,3,4,5};
    int B[5] = {10,20,30,40,50};
    createLinkedList(A,5);
    createSecondLinkedList(B,5);
   // concat(first,second);
    merge(first,second);
    display(third);
    return 0;
}