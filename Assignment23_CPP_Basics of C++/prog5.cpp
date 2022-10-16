// Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    int length=0, breadth=0, height=0, volume;
    cout<<"Enter value of cuboid sides lehgth/breadth/height:";
    cin>>length>>breadth>>height;
    volume = length * breadth * height;
    cout<<"Volume of cuboid is: "<< volume;
    return 0;
}