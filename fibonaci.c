#include<stdio.h>

void fib(int n){
 int  t0=0,t1=1,s=0;
for(int i=2;i<n;i++){
    s= t0+t1;
    t0=t1;
    t1=s;
}
printf("%d",s);

}


int fib2(int n){
    if(n<=1){
        return n;
    }else{
        return fib2(n-2)+fib2(n-1);
    }

}

int main(){

int n=7;
//fib(n);
printf("\n%d",fib2(6));
return 0;

}