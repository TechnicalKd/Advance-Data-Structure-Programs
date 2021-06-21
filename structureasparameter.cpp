#include<iostream>
using namespace std;

struct rectangle { 
    int length;
    int breadth;
};

// void fun(struct rectangle *p){
//     p->length = 100;
//     p->breadth = 20;
//     cout<<" i am from fun function "<<p->length<<endl<<" "<<p->breadth;
// }


struct rectangle *fun(){
    struct rectangle *p;
    p = new rectangle;
    //p = (struct rectangle *)malloc(sizeof(struct rectangle));
    p->length = 15;
    p->breadth = 15;

    return p;
}

int main(){
// struct rectangle k ={10,20};
// fun(&k);
// cout<<"  "<<k.length<<" "<<k.breadth;
struct rectangle *ptr = fun();

cout<<"  "<<ptr->length<<"  "<<ptr->breadth;

return 0;
}