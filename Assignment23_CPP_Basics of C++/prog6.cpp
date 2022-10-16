// Write a C++ program to calculate an average of 3 numbers
#include<iostream>
using namespace std;
int main()
{
    float a, b, c, avg;
    cout<<"Enter value of three numbers:";
    cin>>a>>b>>c;
    avg = (a+b+c)/3;
    cout<<"The average of three numbers are: "<<avg;
    return 0;
}