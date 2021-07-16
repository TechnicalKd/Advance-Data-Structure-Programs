#include<stdio.h>

int main(){

   int i,j; 
   int l=1,h=8;
   int A[10] = {1,8,3,4,3,4,5,6,7,8};
   int H[10] = {0};

    for(i=1;i<10;i++){
        int count=1;
        if(A[i]!=1){
        for(j=i+1;j<10;j++){
            if(A[i]==A[j]){
                count++;
                A[j] = -1;
            }
        }
        if(count>1){
            printf("%d   %d\n",A[i],count);
        }
        }
    }

   return 0; 
}