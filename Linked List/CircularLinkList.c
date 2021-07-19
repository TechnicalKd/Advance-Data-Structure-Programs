#include<stdlib.h>
#include<stdio.h>

struct node 
{
    int data;
    struct node * next;
}*Head=NULL;

void createLinkedList(int A[],int n){
    struct node * last,*temp;
    Head = (struct node *)malloc(sizeof(struct node));
    Head->data = A[0];
    Head->next = Head;
    last = Head;

    for(int i=1;i<n;i++){
        temp = (struct node *)malloc(sizeof(struct node));
        temp->next = last->next;
        temp->data = A[i];
        last->next = temp;
        last = temp;
    }
}

void display(struct node * h){
   do {

       printf("  %d",h->data);
       h  = h->next;

   }while(h!=Head);
}


void RDisplay(struct node *H){

    static int flag=0;
    if(H!=Head || flag==0){
        flag =1;
        printf(" %d",H->data);
        RDisplay(H->next);
    }

}
int count(struct node *H){
    int len=0;
    do
    {   
        len++;
        H =  H->next;
    }while(H!=Head);
    return len;

}

void insert(struct node *h,int pos,int x){
    struct node *temp;
    int i;  
    if(pos<0 && pos>count(h)){
        return ;
    }

    if(pos==0){
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = x;
        if(Head==NULL){
            Head = temp;
            Head->next = Head;
        }else{
            while(h->next!=Head){
                h = h->next;
            }
            h->next = temp;
            temp->next = Head;
            Head=temp;
        }
    }else{
        for(i=0;i<pos-1;i++){
            h = h->next;
        }
         temp = (struct node *)malloc(sizeof(struct node));
        temp->data = x;
        temp->next = h->next;
        h->next= temp;    
    }



}




int main(){
    int A[10] = {1,2,3,4,5,0,0,0,0,0};
    createLinkedList(A,10);

     insert(Head,0,6);   

    RDisplay(Head);
    return 0;
}