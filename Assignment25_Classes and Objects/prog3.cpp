// Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.
#include<iostream>
using namespace std;
int findFactorial(int);
class Factorial
{
private:
    int fact;
    double result;
public:
    void setData(int a)
    {
        fact = a;
        result = findFactorial(fact);
    }
    void display()
    {
        cout<<"Factorial of "<<fact<<" is "<<result;
    }
};
int findFactorial(int s)
{
    if (s == 1)
    {
        
        return 1;
    }
    else
    {
        return s * findFactorial(s-1);
    }
}
int main()
{
    Factorial f1;
    int z;
    cout<<"Enter any positive integer number:";
    cin>>z;
    f1.setData(z);
    f1.display();
    return 0;
}