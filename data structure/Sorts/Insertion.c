#include<stdio.h>
void Display(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}

void Insertion(int A[],int n){
    int i,j,x;
    for(i=1;i<n ;i++){
        j = i-1;
        x = A[i];
        while(j>-1 && A[j]>x){
            A[j+1] = A[j];
            j--; 
        }
        A[j+1] =x;
    }

}


int main(){

    int A[10] = {10,9,8,7,4,5,6,1,2,3};
    Insertion(A,10);
    Display(A,10);

    return 0;
}