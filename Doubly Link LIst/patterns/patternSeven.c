#include<stdio.h>

int main(){
int rows=4;

int count=1;
for(int i=1;i<=rows;i++){
    for(int j=1;j<=i;j++){
        printf("*");
    }
    int space = 2*rows - 2*i;
    for(int j=1;j<=space;j++){
                printf(" ");
    }

    for(int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
}


for(int i=rows;i>=1;i--){
    for(int j=1;j<=i;j++){
        printf("*");
    }
    int space = 2*rows - 2*i;
    for(int j=1;j<=space;j++){
                printf(" ");
    }

    for(int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
}



}