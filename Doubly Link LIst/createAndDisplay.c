#include<stdio.h>
#include<stdlib.h>

struct node{
     struct node *prev;
    int data;
     struct node *next;
}*first=NULL;


void create(int A[],int n){

    struct node *last,*temp;

    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    first->prev = NULL;
    last = first;

    for(int i=1;i<n;i++){

        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = A[i];
        temp->next = last->next;
        temp->prev = last;
        last->next = temp;
        last = temp;
    }
}

void display(struct node *p){
    while(p){
        printf(" %d",p->data);
        p = p->next;
    }
    printf("\n");
}

int main(){

int A[5] = {10,20,30,40,50};
create(A,5);
display(first);
 return 0;
}