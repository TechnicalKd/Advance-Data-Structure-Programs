#include<stdio.h>

int main(){

    char A[] = "Kiran Devkar";

    int i;
    int vowel,ccount;
    int word;
    for(i=0;A[i]!='\0';i++){
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u')
        {
            vowel++;
        }else if(A[i]>65 || A[i]<90 || A[i]>97 || A[i]<122){
            ccount++;
        }else if(A[i]=="")
        {
            word++;
        
        }

        
    }
    printf("Vowels Are=%d",vowel);
    printf("Ccount Are=%d",ccount);
    printf("Total Words Are=%d",word);


    return 0;
}