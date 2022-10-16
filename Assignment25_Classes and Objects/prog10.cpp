// Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc.
#include<iostream>
using namespace std;
class Area
{
private:
    float area;
    int area1;
public:
    void findArea(float r)
    {
        area = 3.14 * r * r;
    }
    void findAreaint(int s)
    {
        area = s * s;
    }
    void findArea(int l, int b)
    {
        area = l * b;
    }
    void display()
    {
        cout<<"Area of Circle is: "<<area<<endl<<endl;
    }
};
int main()
{
    Area cirle, square, rectangle;
    int x =1;
    while (x)
    {
        cout<<"Enter your choice accordingly:"<<endl;
        cout<<"press 1. to find area of circle:"<<endl;
        cout<<"press 2. to find area of sqaure:"<<endl;
        cout<<"press 3. to find area of Rectangle:"<<endl;
        cout<<"press 4. for exit:"<<endl;
        cout<<endl<<"Waiting for input...";
        int choice;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter value of radius:"<<endl;
            float r;
            cin>>r;
            cirle.findArea(r);
            cirle.display();
            break;
        case 2:
            cout<<"Enter value of square:"<<endl;
            int s;
            cin>>s;
            cirle.findArea(s);
            cirle.display();
            break;
        case 3:
            cout<<"Enter value of rectangle:"<<endl;
            int a, b;
            cin>>a>>b;
            cirle.findArea(a, b);
            cirle.display();
            break;
        case 4:
            x = 0;
            break;
        default:
            cout<<"Enter any vaild choice:"<<endl;
            break;
        }
    }

    return 0;
}