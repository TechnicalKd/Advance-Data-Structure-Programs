#include<stdio.h>

int main(){

    char S[] = "Kiran";
    int i;
    int count=0;
    for(int i=0;S[i]!='\0';i++){
        count++;
    }

    printf("Length of String is=%d",count);
 

    return 0;
}