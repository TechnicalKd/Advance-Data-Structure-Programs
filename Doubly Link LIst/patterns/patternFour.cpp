#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
int rows=5;


for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        if(j<=rows-i){
            printf(" ");
        }else{
            printf("*");
        }
    }
    printf("\n");
}



}