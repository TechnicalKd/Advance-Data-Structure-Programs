#include<stdio.h>

int taylor(int x,int n){
    int p=1,f=1;
    int temp;
    if(n==0){
        return 1;
    }else{
        temp= taylor(x,n-1);
        p= p*x;
        f = f*n;
        return temp+p/f;
    }
}

int main(){
    printf("%d",taylor(3,100));
    return 0;
}