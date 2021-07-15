#include<iostream>
using namespace std;

template <class T>
class Array{
    private:
        T *A;
        int size;
        int length;
    public:
        Array(){
            A = new T[10];
            size = 10;
            length=10;
        }    
        Array(int sz,int lenth){
            A = new T[sz];
            size = sz;
            length=lenth;
        }

        ~ Array(){
            delete []A;
        }

        void Display();
        void insert(int index,T x);
        T Delete(int index);
};

template <class T>
void Array<T>::Display(){
    int i;
    for(i=0;i<length;i++){
        cout<<" "<<A[i]<<" ";
    }
}

template<class T>
void Array<T>::insert(int index,T x){
    int i;
    if(index>=0 && index<length){
        for(i=length-1;i>=index;i--){
              A[i+1] = A[i];  
        }
        A[index] = x;
        length++;
    }
}

template<class T>
T Array<T>::Delete(int index){
      int i;
      int x = A[index];
      if(index>=0 && index<length){
          for(i=index;i<length-1;i++)
          {
                A[i] = A[i+1];      
          }
          length--;

      }  
      return x;
}

int main(){

Array <int> arr(10,10);
arr.insert(0,2);
arr.insert(1,2);
arr.insert(2,5);
arr.insert(3,2);

arr.Display();
cout<<arr.Delete(2)<<" ";
arr.Display();
return 0;
}