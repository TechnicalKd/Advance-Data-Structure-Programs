#include<stdio.h>

int main(){

    char S[] = "KIRAN";
    int i;
    int count=0;
    
    for(i=0;i<S[i]!='\0';i++){
    //printf("%c ",S[i]-32);
    // S[i] =S[i]-32;
     S[i] =S[i]+32;
    }
    printf("%s",S);
 

    return 0;
}