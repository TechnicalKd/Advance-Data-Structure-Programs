#include<stdio.h>
#include<stdlib.h>
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

    void swap(int *x,int  *y){
        int temp;
        temp= *x;
        *x= *y;
        *y = temp;
    }

    int LinearSearch(struct Array *arr,int key){
        int i;
        for(i=0;i<arr->length;i++){
            if(key==arr->A[i]){
                swap(&arr->A[i],&arr->A[0]);
                return i;
            }
        }
        return -1;
    }

    int get(struct Array *arr,int index){
        if(index>0 && index<arr->length){
            return arr->A[index];
        }
    } 

     void set(struct Array *arr,int index,int key){
        if(index>0 && index<arr->length){
             arr->A[index] = key;
        }
    } 

    int maxi(struct Array *arr){
            int max = arr->A[0];
            for(int i=0;i<arr->length;i++){
                if(arr->A[i]>max){
                    max = arr->A[i];
                }
            }
            return max;
    }

    void reverse(struct Array *arr){
        int i,j;
        for(i=0,j=arr->length-1;i<j;i++,j--)    
        {
            swap(&arr->A[i],&arr->A[j]);
        }       
    }


    void reverse2(struct Array *arr){
        int i,j;
        int *b;
        b = (int *)malloc(arr->length*sizeof(int));
        for(i=arr->length-1,j=0;i>=0;i--,j++)
        {
            b[j] = arr->A[i];
        }

        for(i=0;i<arr->length;i++)
        {
            arr->A[i] = b[i];
        }

    }


int isSorted(struct Array *arr){
    for(int i=0;i<arr->length-1;i++){
        if(arr->A[i]<arr->A[i+1]){
            return 0;
        }
    }
    return -1;
}


struct Array * mergeArray(struct Array *a1,struct Array *a2)
{
    int i=0,j=0,k=0;
    struct Array *a3;
    a3 = (struct Array *)malloc(a1->length+a2->length*sizeof(struct Array));

    while(i<a1->length && j<a2->length){
        if(a1->A[i]<a2->A[j]){
            a3->A[k++] = a1->A[i++];
        }else{
            a3->A[k++] = a2->A[j++];
        }
    } 
    for(;i<a1->length;i++){
        a3->A[k++] = a1->A[i];
    }

    for(;j<a2->length;j++){
        a3->A[k++] = a2->A[j];
    }   

    a3->length = a1->length + a2->length;
    a3->size = 10;
    return a3;
}

int main(){
    struct Array a1 = {{10,20,5,30,50},10,4};
    struct Array a2 = {{100,200,50,300,500},10,4};
    struct Array *arr;
     //append(&a1,100);
    //insert(&a1,2,15);
    //printf("%d",Delete(&a1,2));
    //printf("%d",LinearSearch(&a1,55));
   // printf("%d",get(&a1,1));
    //set(&a1,3,44);
   // printf("%d",maxi(&a1));
    //reverse2(&a1);
    //printf("%d",isSorted(&a1));
    arr = mergeArray(&a1,&a2);
    display(arr);

    return 0;
}