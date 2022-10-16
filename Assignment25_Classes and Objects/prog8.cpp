// Define a class Rectangle and define an instance member function to find the area of
// the rectangle.
#include<iostream>
using namespace std;
class Rectangle
{
private:
    int area;
public:
    void findArea(int l, int b)
    {
        area = l * b;
    }
    void display()
    {
        cout<<"Area of Rectangle is: "<<area;
    }
};
int main()
{
    Rectangle r1;
    int a, b;
    cout<<"Enter the value of length and breadth:";
    cin>>a>>b;
    r1.findArea(a,b);
    r1.display();
    return 0;
}