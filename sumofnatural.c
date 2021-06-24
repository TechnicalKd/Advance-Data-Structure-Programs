#include<stdio.h>

int fun1(int n){

    if(n==0){
        return 0;
    }
    else 
    {
        return fun1(n-1)+n;
    }

} 
 
 void fun(int n){
     int sum=0;
     for(int i=0;i<n;i++){
         sum = sum+i;
     }
     printf("%d\n",sum);
 }

 int main(){
     int r= fun1(6);
     fun(7);
      printf("%d",r);
     return 0; 
 }