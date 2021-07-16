#include<stdio.h>

void serialNaturalNumber(int a[],int n,int l){

    int diff; 
    diff = l-0;
    for(int i=0;i<n;i++){
        if(a[i]-i !=diff){
            printf("Missing Elenement At=%d",i+diff);
        }
    }
}

int main(){
   int a[10] = {6,7,8,9,11};
   serialNaturalNumber(a,5,6); 
return 0;
}