#include<stdio.h>
void Display(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}
void Merge(int A[],int l,int mid,int h){
    int i=l,j=mid+1,k=l;
    int B[100];

    while(i<=l && j<=h){
        if(A[i]<A[j]){
            B[k++] = A[i++];
        }else {
            B[k++] = A[j++];
        }
    }
    for(;i<=mid;i++){
        B[k++] = A[i];
    }
    for(;j<=h;j++){
        B[k++] = A[j];
    }

    for(i=l;i<=h;i++){
        A[i]  = B[i];
    }
}

void iMergeSort(int A[],int n){
    int p,mid,l,h,i;
    for(p=2;p<=n;p=p*2){
        for(i=0;i+p-1<n;i=i+p){
        l=i;
            h= i+p-1;
            mid = (l+h)/2;
            //printf("Call sent");
            Merge(A,l,mid,h);
        }
    }
    if(p/2<n){
        Merge(A,0,p/2-1,n-1);   
    }
}

void recursiveMerge(int A[],int l,int h){
    int mid;
    if(l<h){
        mid = (l+h)/2;
        recursiveMerge(A,l,mid);
        recursiveMerge(A,mid+1,h);
        Merge(A,l,mid,h);
    }
}


int main(){

int A[10] = {1,2,3,4,6,5,7,8,9,10};
    recursiveMerge(A,0,9);
    Display(A,10);
    return 0;

}