#include<stdio.h>
int main(){
   int A[10] = {6,7,8,9,10,11,12,15,17,18};
    int H[18]={0};
    int l=6,h=18;

    for(int i=0;i<10;i++){
        H[A[i]]++;
    } 

    for(int j=l;j<h;j++){
        if(H[j]==0){
            printf("Missing ELement Are=%d\n",j);
        }
    }

return 0;
}