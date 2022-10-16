// Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int var1, var2;
    cout<<"Enter two number:";
    cin>>var1>>var2;
    cout<<"Before swaping variables value are: "<<var1<<" and "<<var2;
    var1 = var1 + var2;
    var2 = var1 - var2;
    var1 = var1 - var2;
    cout<<endl<<endl;
    cout<<"After swaping variables values are: var1 = "<<var1<<endl<<"var2 = "<<var2;
    return 0;
}