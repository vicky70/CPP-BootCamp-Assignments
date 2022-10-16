// Define a function to calculate x raised to the power y.
#include<iostream>
void powerFunc(int, int);
using namespace std;
int main()
{
    int x, y;
    cout<<"Enter number and power of number:";
    cin>>x>>y;
    powerFunc(x,y);
    return 0;
}
void powerFunc(int x, int y)
{
    int temp =x;
    for (int i = y-1; i > 0; i--)
    {
        temp *= x;
    }
    cout<<"Answer is="<<temp;
}