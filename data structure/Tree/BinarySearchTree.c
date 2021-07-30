#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *lchild;
    int data;
    struct node *rchild;

}*root=NULL;

void insert(int key){
    struct node *temp=root;
    struct node *r,*p;
    if(root==NULL){
        p = (struct node *)malloc(sizeof(struct node));
        p->data = key;
        root = p;
        p->lchild=p->rchild= NULL;    
        return;
    }
    while(temp!=NULL){
        r=temp;
        if(key<temp->data){
            temp= temp->lchild;    
        }else if(key>temp->data){
            temp= temp->rchild;    
        }else{
            return;
        }
    }
   p = (struct node *)malloc(sizeof(struct node));
        p->data = key;
        p->lchild=p->rchild= NULL;
        if(key<r->data){
            r->lchild =p;
        }else{
            r->rchild = p;
        }
}

void inorder(struct node *p){
    if(p){
        inorder(p->lchild);
        printf("%d",p->data);
        inorder(p->rchild);
    }
}

struct node * search(int key){
    struct node *temp=root;
    while(temp!=NULL){
        if(key==temp->data){
            return temp;
        }else if(key<temp->data){
            temp = temp->lchild;
        }else{
            temp = temp->rchild;
        }
    }
        return NULL; 

}

struct node * deleted(struct node *root,int key){
    if(key<root->data){
        root->lchild = deleted(root->lchild);
        
    }
}


int main(){

    insert(10);
   insert(15);
   insert(5);

    inorder(root);

    struct node *sear;
     sear=search(5);
if(sear!=NULL){
    printf("\nElement %d is found",sear->data);
}else{
    printf("Not Found");
}

    return 0;

}
