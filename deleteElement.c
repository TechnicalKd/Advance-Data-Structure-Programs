#include<stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
}; 

void display(struct Array *arr){
    int i;
    for(i=0;i<arr->length;i++){
        printf(" %d",arr->A[i]);
    }
}

void append(struct Array *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++] = x;
    }
}

void insert(struct Array *arr,int index,int x){
    int i;
    if(index>0 && index<arr->length){
        for(i=arr->length;i>index;i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x ;
        arr->length++;
    }
}
    

    int Delete(struct Array *arr,int index)
    {
        if(index<arr->length && index>=0)
        {
        int x = arr->A[index];
        for(int i=index;i<arr->length-1;i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return x;
        }
        return 0;
    }



int main(){
    struct Array a1 = {{10,20,30,50},10,4};
     append(&a1,100);
    insert(&a1,2,15);
    printf("%d",Delete(&a1,2));
    display(&a1);

    return 0;
}