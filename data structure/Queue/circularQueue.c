#include<iostream>
using namespace std;

class Queue {
    private:
        int front;
        int rear;
        int size;
        int *Q;
      public:
        Queue(){
            front=rear=-1;
            size=10;
            Q = new int[size];
        } 
        Queue(int size){
            front=rear=0;
            this->size = size;
            Q = new int[this->size];
        } 
        void enqueue(int x){

            if((rear+1)%size==front){
                cout<<"QUeue is full";
            }else{
                rear = (rear+1)%size;
                Q[rear] = x;
            }

        }

        int dequeue(){
            int x = -1;
            if(rear==front){
                cout<<"Queue Empty";
            }else{  
                front = (front+1)%size;
                x = Q[front+1];
            }   
           return x; 
        }

        void display(){
            int i=front+1;
            do{
                printf("%d",Q[i]);
                i = (i+1)%size;
            }while(i!=(rear+1)%size);
            printf("\n");
        }
};

int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(40);
    q.enqueue(40);

    printf("%d\n",q.dequeue());

    q.display();
    return 0;
}