#include<iostream>
 using namespace std;
 
int main()
{
    int rows,cols;

    cout<<"Enter the rows and cols";
    cin>>rows>>cols;

    for(int i=rows;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        printf("\n");
    }



    return 0;
}