#include<iostream>
#include<stdlib.h>

using namespace std;


// void function(int a[],int n){
//     for(int i=0;i<n;i++){
//         cout<<" "<<a[i]<<"";
//     }

// }

int *function(int z){
    int *p;
    p = new int[z];
    for(int i=0;i<z;i++){
        p[i] = i+6;
    }
    return p;
}

int main(){

int *ptr,sz=5;
ptr = function(sz);

for(int i=0;i<sz;i++){
    cout<<" "<<ptr[i]<<endl;
}
//   int A[5] = {10,20,30,40,50};
//   int n=5;

//    function(A,5);  

//   for(int i=0;i<n;i++){
//       cout<<""<<A[i]<<"";
//   }


  return 0;  
}