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
 int Max(struct node *p){
     int max = 0;

    while(p!=NULL){
        if(p->data>max){
            max = p->data;
        }
        p  = p->next;
    }
        return max;

 }

int main(){
    int A[5] = {1,2,3,14,5};
    createLinkedList(A,5);
    display(first);
    printf("Max Element is %d\n",Max(first));

    return 0;
}