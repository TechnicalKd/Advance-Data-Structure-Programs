#include<stdio.h>
#include<stdlib.h>

void Display(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}

void shellSort(int A[],int n){
    int gap,i,j,temp;
    for(gap=n/2;gap>=1;gap/=2){
        for(i=gap;i<n;i++){
            temp = A[i];
            j= i-gap;
           while(j>=0 && A[j]>temp){
               A[j+gap] = A[j];
               j = j-gap;
           }
           A[j+gap] temp;
        }
    }
}


int main(){
     int A[10] = {10,9,8,7,6,5,4,3,2,1};
     shellSort(A,10);
     Display(A,10); 
    return 0;
}
