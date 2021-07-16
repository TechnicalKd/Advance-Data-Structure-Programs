#include<stdio.h>

int main(){
    int A[10] = {1,2,3,4,5,5,6,7,8,8};
    int i,j;
    for(i=0;i<9;i++){
        if(A[i]==A[i+1]){
            j= i+1;
            while(A[j]==A[i]){
                j++;
            }
            printf("%d number is repeated at %d time\n",A[i],j-i);
            i= j-1;
        }
    }
    return 0;
}