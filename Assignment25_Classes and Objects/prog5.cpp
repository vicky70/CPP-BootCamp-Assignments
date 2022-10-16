// Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.
#include<iostream>
using namespace std;
int find_reverse();
class ReverseNumber
{
private:
    int numReverse;
public:
    void setData()
    {
        numReverse = find_reverse();
    }
    void display()
    {
        cout<<"Revserse number is "<<numReverse;
    }
};
int find_reverse()
{
    cout<<"Enter number";
    int num, rev = 0;
    cin>>num;
    if (num >= 0 && num <= 9)
    {
        return num;
    }
    else
    {
        while (num > 0)
        {
            int x = num%10;
            num = num/10;
            rev = rev*10 + x;
        }
        return rev;
    }
}
int main()
{
    ReverseNumber r1;
    r1.setData();
    r1.display();
    return 0;
}