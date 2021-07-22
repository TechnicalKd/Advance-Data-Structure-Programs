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
            front=rear=-1;
            this->size = size;
            Q = new int[this->size];
        } 
        void enqueue(int x){

            if(rear==size-1){
                cout<<"QUeue is full";
            }else{
                rear = rear+1;
                Q[rear] = x;
            }

        }

        int dequeue(){
            int x = -1;
            if(rear==front){
                cout<<"Queue Empty";
            }else{  
                x = Q[front+1];
                front++;
            }   
           return x; 
        }

        void display(){
            for(int i=front+1;i<=rear;i++){
                printf("%d",Q[i]);
            }
        }
};

int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    printf("%d",q.dequeue());
    
    q.display();
    return 0;
}