// Write a C++ program to calculate the square of a number
#include<iostream>
using namespace std;
int main()
{
    int square, input;
    cout<<"enter a number to calculate square:";
    cin>>input;
    square = input * input;
    cout<<"Square of given number is: "<< square;
    return 0;
}