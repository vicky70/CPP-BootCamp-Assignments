// Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class
#include<iostream>
using namespace std;
int findGreatestNumber();
class LargestNumber
{
private:
    int greatestNumber;
public:
    void setData()
    {
        greatestNumber = findGreatestNumber();
    }
    void display()
    {
        cout<<"The greatest number is "<<greatestNumber;
    }

};
int findGreatestNumber()
{
    cout<<"Enter three numbers";
    int a, b, c;
    cin>>a>>b>>c;
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c && b > a)
    {
        return b;
    }
    else
    {
        return c;
    }
    
}
int main()
{
    LargestNumber l1;
    l1.setData();
    l1.display();
    return 0;
}