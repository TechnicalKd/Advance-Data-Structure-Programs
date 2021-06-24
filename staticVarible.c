#include<stdio.h>

int fun(int n){
    if(n>0){
        return fun(n-1)+n;
    }
    return 0;
}

int main()
{
    int n=3;   
    printf("%d",fun(n));
    return 0;
}