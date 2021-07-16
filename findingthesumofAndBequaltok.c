#include<stdio.h>
int main(){

    int i,j;
    int k;
     int A[10] = {1,2,3,4,5,6,7,8,9,10};
     int H[10]={0};

    printf("Enter the K number\n");
    scanf("%d",&k);
    
    ///First Approch
    for(i=0;i<8;i++){
        for(j=i+1;j<9;j++){
            if(k==A[i]+A[j]){
                printf("%d+%d=%d\n",A[i],A[j],k);
            }
        }
    }

    ////second Approch using Hashing Tequnique
    printf("\n");

    for(i=0;i<9;i++){
        if(H[k-A[i]]!=0){
                printf("%d+%d=%d\n",A[i],A[j],k);
        }else{
            H[A[i]]++;
        }
    }


    return 0;   
}