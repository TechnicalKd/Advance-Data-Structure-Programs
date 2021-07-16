#include<stdio.h>

void serialNaturalNumber(int a[],int n,int l){

    int diff; 
    diff = l-0;
    for(int i=0;i<n;i++){
        if(a[i]-i != diff){
           while(diff<a[i]-i){
            printf("Missing Elenement At=%d",i+diff);
            diff++;
           }
        }
    }
}

int main(){
   int a[10] = {6,7,8,9,10,11,12,15};
   serialNaturalNumber(a,8,6); 
return 0;
}