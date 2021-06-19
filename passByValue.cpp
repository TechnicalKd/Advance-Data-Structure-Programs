#include<iostream>
#include<stdlib.h>
using namespace std;

void swap(int x,int y){
    int temp;
    temp = x;
    x=y;
    y=temp; 
}

int main(){

    int a=10;
    int b=20;

    swap(a,b);
    cout<<"The value of a"<<a;
    cout<<"The value of b"<<b;
return 0;
}