#include<stdio.h>
#define size 10

int Hash(int key){
    return key%size;
}

int probe(int H[],int key){
    int index = Hash(key);
    int i;
    while(H[(index+i)%size]!=0){
        i++;
    }
    return (index+i)%size; 
}


void insert(int H[],int key){

    int index = Hash(key);
    if(H[index]!-0){
        index = probe(H,key);
    }
    H[index] = key;
}

int main(){
    int HT[10] = {0};

    insert(HT,12)
    insert(HT,22)
    insert(HT,32)
          


    return 0;
}