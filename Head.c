#include<stdio.h>

void fun(int n){
    if(n>=10){
        fun(n*2);
        printf("%d\n",n);
    }
}

int main(){
    fun(10);
    return 0;
}