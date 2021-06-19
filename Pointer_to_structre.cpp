#include<iostream>
#include<stdlib.h>

using namespace std;

struct rectangle {
    int length;
    int breadth;

};

int main(){
rectangle k = {10,20};
cout<<k.length<<endl;
cout<<k.breadth<<endl;

///pointer to structure
rectangle *p = &k;
//cout<<p->length<<endl;
//cout<<p->breadth<<endl;
///create Object in Head
// p = (struct rectangle *)malloc(sizeof(struct rectangle));
p = new rectangle;
p->length = 100;
p->breadth = 100;
cout<<p->length<<endl;
cout<<p->breadth<<endl;



return 0;
}   