#include<stdio.h>
void swap(int *x,int *y){
    int temp = *x;
    *x =*y;
    *y =temp;
}
void Bubble(int A[],int n){
     int i,j;
     for(i=0;i<n-1;i++){
         for(j=0;j<n-i-1;j++){
             if(A[j]>A[j+1]){
                 swap(&A[j],&A[j+1]);
             }
         }
     }
}



void Display(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}

int main(){
     int A[10] = {10,9,8,7,6,5,4,3,2,1};
     int i;
     Bubble(A,10);
     Display(A,10); 



    return 0;
}
