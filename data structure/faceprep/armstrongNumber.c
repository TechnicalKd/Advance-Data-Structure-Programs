#include<stdio.h>

int main(){

    int n=143;
    int remainder;
    int temp;
    int sum=0;

    temp = n;
    while(n>0){
        remainder = n%10;
        sum = sum +(remainder*remainder*remainder);
        n = n/10;
    }
    if(sum==temp){
        printf("\nNumber is Armstrong");
    }else{
        printf("not");
    }


    return 0;
}