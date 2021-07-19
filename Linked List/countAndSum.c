
#include<stdio.h>
#include<stdlib.h>

struct node 
{
   int data;
    struct node * next;
}*first=NULL;

void createLinkedList(int A[],int n){
    struct node *temp,*last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next= NULL;
    last = first;

    for(int i=1;i<n;i++){
    temp = (struct node *)malloc(sizeof(struct node));
    temp->next = NULL;
    temp->data = A[i];
    last->next = temp;
    last = temp;
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

int Rcount(struct node *p){
    int count  = 0;
    if(p==0){
        return 0;
    }else{
        return Rcount(p->next)+1;
    }
}

int SumOfTheLL(struct node *p){
    int sum=0;
    while(p!=NULL){
        sum = sum+p->data;
        p = p->next;
    }
    return sum;
}

void display(struct node *p){
    while(p!=NULL){
        printf("%d",p->data);
        p = p->next;
    }
}


int RSumOfTheLL(struct node *p){
    int sum=0;
    if(p==0){
        return 0;
    }else{
        return RSumOfTheLL(p->next) + p->data;
    }
}
    



int main(){

    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    createLinkedList(A,10);
    display(first);
    printf("\n%d",count(first));
    printf("\n%d",Rcount(first));
    printf("\n%d",SumOfTheLL(first));
    printf("\n%d",RSumOfTheLL(first));
    return 0;
}