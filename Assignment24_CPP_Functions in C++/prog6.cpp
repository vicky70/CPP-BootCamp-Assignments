// Define a function to swap data of two int variables using call by reference
#include<iostream>
void swap(int *, int *);
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter any two number:";
    cin>>a>>b;
    cout<<"Before swaping a = "<<a<<" b = "<<b<<endl;
    swap(&a, &b);
    cout<<"After swaping  a = "<<a<<" b = "<<b;
    return 0;
}
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}