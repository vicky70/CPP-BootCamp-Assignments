// Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
int add(int, int, int=0);
using namespace std;
int main()
{
    int a,b,c, limit, sum;
    cout<<"How many number you want to add:";
    cin>>limit;
    if (limit == 2)
    {
        cout<<"Enter two numbers:";
        cin>>a>>b;
        sum = add(a, b);
        cout<<"The sum of two number is: sum = "<<sum;
    }
    else
    {
        cout<<"Enter three numbers:";
        cin>>a>>b>>c;
        sum = add(a, b, c);
        cout<<"The sum of two number is: sum = "<<sum;
    }
    return 0;
}
int add(int a,int b,int c)
{
    int sum = a + b + c;
    return sum;
}