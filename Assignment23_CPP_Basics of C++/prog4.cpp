// Write a C++ program to calculate the area of a circle
#include<iostream>
using namespace std;
int main()
{
    float area=0, radius;
    cout<<"enter value of radius:";
    cin>>radius;
    area = (3.14 * radius * radius);
    cout<<"The area of circle is: "<<area;
    return 0;
}
