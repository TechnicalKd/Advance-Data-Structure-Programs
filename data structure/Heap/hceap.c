#include<stdio.h>

void insert(int H[],int n){
    int i=n,temp;
    temp = H[i];

    while(i>1 && temp>H[i/2])
    {
         H[i] = H[i/2];
         i = i/2; 
    }
    H[i] = temp;
}


int Deleted(int H[],int n){
    int i,j,x,val;
    x = H[n];
    val = H[1];
    H[1] = H[n];
    i=1,j=2*i;
    while(j<n-1){
        if(H[j+1]>H[j]){
            j = j+1;
        }

        if(H[i]<H[j]){
            int temp;
            H[i] = H[j];
            H[j] = temp;
            i = j;
            j= 2*j; 
        }else{
            break;
        }


    }
    return val;
}

int main(){
    int H[] ={0,10,20,30,25,5,40,35};
    // insert(H,2);
    // insert(H,3);
    // insert(H,4);
    // insert(H,5);
    // insert(H,6);
    for(int i=2;i<=7;i++){
        insert(H,i);
    }

    //printf("Deleted element is %d\n",Deleted(H,7));

    for(int i=1;i<=7;i++){
        printf("%d ",H[i]);
    }

    return 0;
}