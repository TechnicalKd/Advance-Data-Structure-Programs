#include<stdio.h>
#include<math.h>

int fact(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact = fact*i;
    }
    return fact;
}


int main(){

 int n,r;
 printf("Enter the Number");
 scanf("%d%d",&n,&r);

    // printf("%d",fact(a));

    int  k = fact(n)/fact(n-r)*fact(n);
    printf("%d",k);

    return 0;
}