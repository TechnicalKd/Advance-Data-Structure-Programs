#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *lchild;
    struct node *rchild;
    int data;
};

struct Queue
{
    int size;
    int front;
    int rear;
    struct node  **Q;
};
void createQueue(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->rear=0;
    q->Q=(struct node **)malloc(q->size*sizeof(struct 
node *));
}
void enqueue(struct Queue *q,struct node *x)
{
    if((q->rear+1)%q->size==q->front)
        printf("Queue is Full");
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}
struct node * dequeue(struct Queue *q)
{
    struct node* x=NULL;
    
    if(q->front==q->rear)
        printf("Queue is Empty\n");
    else
    {
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}
int isEmpty(struct Queue q)
{
    return q.front==q.rear;
}

struct node *root=NULL;

void createTree(){
    struct node *temp,*p;
    int x;
    struct Queue q;
    createQueue(&q,100);

    printf("Enter Root Value");
    scanf("%d",&x);

    root = (struct node *)malloc(sizeof(struct node));
    root->data =x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);

    while(!isEmpty(q)){
        p = dequeue(&q);
        printf("enter the left child of %d",p->data);
        scanf("%d",&x);
        if(x!=-1){
            temp = (struct node *)malloc(sizeof(struct node));
            temp->data =x;
            temp->lchild=temp->rchild=NULL;
            p->lchild = temp;
            enqueue(&q,temp);
        }
        printf("eneter right child of %d ",p->data);
        scanf("%d",&x);

                if(x!=-1)
        {
 temp=(struct node *)malloc(sizeof(struct node));
            temp->data=x;
            temp->lchild=temp->rchild=NULL;
            p->rchild=temp;
            enqueue(&q,temp);
        }

    }
}

    void Preorder(struct node *p)
{
    if(p)
    {
        printf("%d ",p->data);
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void Inorder(struct node *temp){
    if(temp){
        Inorder(temp->lchild);
        printf("%d",temp->data);
        Inorder(temp->rchild);
    }
}

void LevelOrder(struct node *p){
    struct Queue q;
    createQueue(&q,100);

    printf("%d",p->data);
    enqueue(&q,root);

    while(!isEmpty(q)){

        root = dequeue(&q);
        if(root->lchild){
            printf("%d",root->lchild->data);
            enqueue(&q,root->lchild);
        }
        if(root->rchild){
            printf("%d",root->rchild->data);
            enqueue(&q,root->rchild);
        }

    }

}

int main(){
        createTree();
        //Preorder(root);
       
        LevelOrder(root);    
        return 0;
}





