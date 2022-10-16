// Define a class Greatest and define instance member function to find Largest among
// 3 numbers using classes.
#include<iostream>
using namespace std;
class Greatest
{
private:
    int greatest;
public:
    void fun1(int x, int y, int z)
    {
        if (x > y && x > z)
        {
            greatest = x;
        }
        else if (y > z && y > x)
        {
            greatest = y;
        }
        else
        {
            greatest = z;
        }
    }
    void dispaly()
    {
        cout<<"Greatest number is "<<greatest;

    }
};
int main()
{
    Greatest g1;
    int a, b, c;
    cout<<"Enter any three number:";
    cin>>a>>b>>c;
    g1.fun1(a, b, c);
    g1.dispaly();
    return 0;
}