#include<stdio.h>

int rec(int m,int n){
    if(n==0){
        return 1;
    }
   if(n%2==0){
        return rec(m*m,n/2);
    }else{
        return m*rec(m*m,(n-1)/2);
    }
}



int main(){
    printf("Power of recusion=%d",rec(2,3));
    return 0;
}