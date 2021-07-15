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

struct Array * unionAll(struct Array *a1,struct Array *a2){
    int i,j,k;
    i=j=k=0;

  struct Array *a3=(struct Array *)malloc(a1->length+a2->length*sizeof(struct
Array));
    while(i<a1->length && j<a2->length){
        if(a1->A[i]<a2->A[j]){
            a3->A[k++] = a1->A[i++];
        }else if(a2->A[j]<a1->A[i]){
            a3->A[k++] = a2->A[j++];
        }else{
            a3->A[k++] = a1->A[i++];
            j++;
        }
    }

for(;i<a1->length;i++){
    a3->A[k++] = a1->A[i];
}


for(;j<a2->length;j++){
    a3->A[k++] = a2->A[j];
}

a3->length = k;
a3->size = 10;

return a3;

}

struct Array * intersection(struct Array *a1,struct Array *a2){
    int i,j,k;
    i=j=k=0;

  struct Array *a3=(struct Array *)malloc(a1->length+a2->length*sizeof(struct
Array));
    while(i<a1->length && j<a2->length){
        if(a1->A[i]<a2->A[j]){
           i++;
        }else if(a2->A[j]<a1->A[i]){
          j++;
        }else if(a1->A[i]==a2->A[j]) {
            a3->A[k++] = a1->A[i++];
            j++;
        }
    }
a3->length = k;
a3->size = 10;

return a3;

}


struct Array * difference(struct Array *a1,struct Array *a2){
    int i,j,k;
    i=j=k=0;

  struct Array *a3=(struct Array *)malloc(a1->length+a2->length*sizeof(struct
Array));
    while(i<a1->length && j<a2->length){
        if(a1->A[i]<a2->A[j]){
           a3->A[k++] = a1->A[i++];
        }else if(a2->A[j]<a1->A[i]){
          j++;
        }else 
        {
           i++;
            j++;
        }
    }
    for(;i<a1->length;i++){
           a3->A[k++] = a1->A[i];
    }
a3->length = k;
a3->size = 10;

return a3;

}






int main(){
    struct Array a1={{2,9,21,28,35},10,5};
    struct Array a2={{2,3,9,18,28},10,5};
    struct Array *a3;

    // a3 = unionAll(&a1,&a2);
    // display(a3);
    //   a3 = intersection(&a1,&a2);
    //  display(a3);
   a3 = difference(&a1,&a2);
     display(a3);
    return 0;
}