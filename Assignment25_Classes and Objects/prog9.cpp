// Define a class Circle and define an instance member function to find the area of the
// circle.
#include<iostream>
using namespace std;
class Circle
{
private:
    float area;
public:
    void findArea(float r)
    {
        area = 3.14 * r * r;
    }
    void display()
    {
        cout<<"Area of Circle is: "<<area;
    }
};
int main()
{
    Circle r1;
    float a;
    cout<<"Enter the value of radius:";
    cin>>a;
    r1.findArea(a);
    r1.display();
    return 0;
}