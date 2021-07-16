#include<stdio.h>

int main(){

char A[20] = "abcdef";
// char B[20]="";

 int i,j;
int length=0;
for(i=0;A[i]!='\0';i++)
{   
    length++;
}
length = length-1;
//  for(int j=0,i=length;i>0;i--,j++){
//      B[j] = A[i];
//  }
// printf("%s",B);
char t;
for(j=0;j<length;j++,length--){
    t = A[j];
    A[j] =A[length];
    A[length] = t;
}
A[i] = '\0';

printf("%s",A);




return 0;
}