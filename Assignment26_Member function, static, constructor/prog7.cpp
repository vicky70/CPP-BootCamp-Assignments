// Define a class Box and write a program to enter length, breadth and height and
// initialise objects using constructor also define member functions to calculate volume
// of the box.
#include<iostream>
using namespace std;
class Box{
    private:
        int length, breadth, height;
    public:
        Box(int l,int b,int h){
            length = l;
            breadth = b;
            height = h;
        }
        void display(){
            cout<<"Volume of Box is: "<<length * breadth * height;
        }
};
int main(){
    Box b1(3, 6, 2);
    b1.display();
    return 0;
}