#include<stdio.h>
#include<math.h>
bool isPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;

}


int main(){

 int a,b;
 printf("Enter the Range");
 scanf("%d%d",&a,&b);

 for(int i=a;i<b;i++){
     if(isPrime(i)){
         printf("  %d",i);
     }
 }



    return 0;
}