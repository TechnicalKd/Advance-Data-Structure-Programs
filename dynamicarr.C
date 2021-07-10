#include<stdio.h>
#include<stdlib.h>

int main(){

      int *p = (int *)malloc(5*sizeof(int));
      p[0] = 1; 
      p[1] = 2; 
      p[2] = 3; 
      p[3] = 4; 
      p[4] = 5; 

     
      int *q = (int *)malloc(10*sizeof(int));

        for(int i=0;i<5;i++){
         q[i] = p[i];
      }  
      //q=p;
      free(p);
        for(int i=0;i<5;i++){
          printf("%d",p[i]);
      }  

      for(int i=0;i<5;i++){
          printf("%d",q[i]);
      }  





    return 0;
}