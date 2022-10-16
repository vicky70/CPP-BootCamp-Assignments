// Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex
// number
#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;
public:
    void setData(int x, int y)
    {
        real = x;
        img = y;
    }
    void display()
    {
        cout<<real<<" + "<<img<<"i";
    }
};
int main()
{
    Complex c1;
    int a, b;
    cout<<"enter complex number real and imaginary part:";
    cin>>a>>b;
    c1.setData(a,b);
    c1.display();
    return 0;
}