#include<stdio.h>

void Display(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selection(int A[],int n){
    int i,j,k;
    for(i=0;i<n-1;i++){
        for(j=k=i;j<n;j++){
            if(A[j]<A[k]){
                k=j;
            }
            swap(&A[i],&A[k]);
        }
    }
}




int main(){

    int A[10] = {10,9,8,7,4,5,6,1,2,3};
    selection(A,10);
    Display(A,10);
    return 0;
}