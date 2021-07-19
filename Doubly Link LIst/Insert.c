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

int count(struct node *p){
    int len=0;
    while(p){
        len++;
        p = p->next;
    }
    return len;
}

void insert(struct node *p,int index,int x){
    struct node *temp;
    int i;

    if(index<0 && index>count(p) ){
        return;
    }
    if(index==0){
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->prev = NULL;
    first->next = first;
    first->prev = temp;
    first = temp;
    }else{

        for(i=0;i<index-1;i++){
        p = p->next;      
        }   
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = x;
        temp->prev =p;
        temp->next = p->next;
        if(p->next){
            p->next->prev  = temp;
        }
        p->next = temp;

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

int A[5] = {10,30,40,50};
create(A,5);
insert(first,1,10);
display(first);
 return 0;
}