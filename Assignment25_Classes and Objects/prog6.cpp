// Define a class Square to find the square of a number and write a C++ program to
// Count number of times a function is called.
#include<iostream>
using namespace std;
class Square
{
private:
    int square;
    static int count;
public:
    void setData(int x)
    {
        count++;
        square = x * x;
    }
    void display()
    {
        count++;
        cout<<"Square of given number is "<<square<<" and function is called "<<count<<" times";
    }
};
int Square::count=0;
int main()
{
    Square s1;
    int num;
    cout<<"Enter any number:";
    cin>>num;
    s1.setData(num);
    s1.display();
    return 0;
}