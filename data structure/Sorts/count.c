#include<stdio.h>
#include<stdlib.h>

int finndMax(int A[],int n){
    int max=0;
    int i;
    for(i=0;i<n;i++){
        if(A[i]>max){
            max = A[i];
        }
    }
    return max;
}

void Display(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}


void count(int A[],int n){
    int i,j=0,max,*c;
    max = finndMax(A,n);
    c = (int *)malloc(sizeof(int)*(max+1));
    for(i=0;i<max+1;i++){
        c[i] = 0;
    }

    for(i=0;i<n;i++){
        c[A[j++]] = A[i];
    }
    j=0;
    for(i=1;i<max+1;i++){
        if(c[i]>0){
            A[j++] = i;
            c[i]--;
        }else{
            i++;
        }
        
    }
}


int main(){
     int A[10] = {10,9,8,7,6,5,4,3,2,1};
     count(A,10);
     Display(A,10); 
    return 0;
}
