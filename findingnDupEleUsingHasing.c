#include<stdio.h>

int main(){

   int i; 
   int l=1,h=8;
   int A[10] = {1,2,3,3,3,4,5,5,7,8};
   int H[10] = {0};

    for(i=0;i<9;i++){
        H[A[i]]++;
    }

    for(i=l;i<=h;i++){
        if(H[i]>1){
            printf("element %d  Repeated  %d times\n ",i,H[i]);
        }
    }
   return 0; 
}