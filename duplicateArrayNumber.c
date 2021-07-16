#include<stdio.h>

int main(){

    int A[10] = {1,2,3,4,5,5,6,7,8,8};
    int i;
    int lastDuplicate;
    for(i=0;i<10;i++){

        if(A[i]==A[i+1] && lastDuplicate != A[i]){
            printf("Duplicate Elements are=%d",A[i]);
            lastDuplicate = A[i];
        }

    }


    return 0;
}