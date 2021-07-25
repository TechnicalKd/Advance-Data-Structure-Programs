#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
}*front=NULL,*rear=NULL;

void enqueue(int x){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
     if(temp==NULL){
         printf("Queue is FUll");
     }else{
        temp->data =x;
        temp->next = NULL;
        if(front==NULL){
            front=rear=temp;
        }else{
            rear->next = temp;
            rear =temp;
        }
     }
}

int dequeue(){
    int x=-1;
    struct node *temp;
    if(front==NULL){
        printf("queue is NULL");
    }else{
        x= front->data;
        temp = front;
        front = front->next;
        free(temp);
    }
    return x;
}


void display(){
    struct node *p=front;
    while(p){
        printf("   %d",p->data);
        p  = p->next;
    }
    printf("\n");
}


int main(){

    enqueue(10);
    enqueue(10);
    enqueue(10);
    enqueue(80);
    enqueue(80);
    enqueue(60);
    enqueue(50);

    dequeue();

    display();

    return 0;
}

