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

int partition(int A[],int l,int h){
    int pivot= A[l];
    int i=l,j=h;
    do{
        do{
            i++;
          }while(A[i]<=pivot);

         do{
            j--;
          }while(A[j]>pivot);   

        if(i<j){
            swap(&A[i],&A[j]);
        }

    }while(i<j);

        swap(&A[l],&A[j]);

        return j;
}

void Quick(int A[],int l,int h){
    int j=0;
    if(l<h){
        j = partition(A,l,h);
        Quick(A,l,j);
         Quick(A,j+1,h);
    }
}




int main(){

    int A[10] = {10,9,8,7,4,5,6,1,2,11};
    Quick(A,0,9);
    Display(A,10);
    return 0;
}