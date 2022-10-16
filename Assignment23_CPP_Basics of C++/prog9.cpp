// Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int var1, var2;
    cout<<"Enter two numbers:";
    cin>>var1>>var2;
    if (var1 > var2)
    {
        cout<<"Var1 is greatest number:";
    }
    else{
        cout<<"Var2 is greatest number:";
    }
    return 0;
}