#include<iostream>

using namespace std;

class Rectangle {

    private :
        int length;
        int breadth;
    public:
        Rectangle(){
            length=0;
            breadth=0; 
         }
         Rectangle(int l,int b){
             length = l;
             breadth = b;
         }
         int area(){
             return length * breadth;
         }
         int perimeter(){
             return 2 *(length+breadth);
         }

         ~Rectangle(){
             cout<<"Destructor is called";
         }
};

int main(){
 Rectangle r(20,20);
 cout<<"Area is =>"<<r.area();
 cout<<"Perimeter =>"<<r.perimeter();

return 0;    
}

