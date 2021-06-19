#include<iostream>
using namespace std;

int main(){

    int n;
    int a[n];
    cout<<"THis is the example of the array"<<endl;
    cout<<"ENter the size of the array"<<endl;
    cin>>n;

    cout<<"ENter the element"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Array Element are"<<endl;

    for(int x=0;x<n;x++){
        cout<<" "<<x<<"==>"<<a[x]<<endl;
    }

    return 0;
}
