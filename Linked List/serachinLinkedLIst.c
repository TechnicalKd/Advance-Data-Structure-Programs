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

// int search(struct node * p,int key){

//     while(p!=NULL){
//         if(key==p->data){
//             return true;
//         }
//         p = p->next;
//     }
//     return NULL;

// }


int Rsearch(struct node *p,int key){
    if(p==NULL){
        return 0;
    }
    if(p->data==key){
        return 1;
    }else{
       return  Rsearch(p->next,key);
    }

}

int main(){
    int A[5] = {1,2,3,4,5};
    createLinkedList(A,5);
    display(first);
    printf("%d",Rsearch(first,10));
    return 0;
}