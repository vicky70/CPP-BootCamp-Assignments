// Write functions using function overloading to add two numbers having different data types.
#include<iostream>
void addition(int, float);
void addition(int, char);
void addition(char, float);
using namespace std;
int main()
{
    int a = 3;
    char ch = 'A';
    float fl = 9.7;
    addition(a, fl);
    addition(a, ch);
    addition(ch, fl);
    return 0;
}
void addition(int x, float fl)
{
    cout<<"addition of int and float type values: "<<x +fl<<endl;
}
void addition(int x, char ch)
{
    cout<<"addition of int and char type values: "<<x +ch<<endl;
}
void addition(char ch, float fl)
{
    cout<<"addition of char and float type values: "<<ch +fl<<endl;
}