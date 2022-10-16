// Define a function to find the highest value digit in a given number.
#include<iostream>
int highestDigit(int);
using namespace std;
int main()
{
    int number, value;
    cout<<"Enter any number:";
    cin>>number;
    value = highestDigit(number);
    if (value == 0)
    {
        cout<<"Given number is one digit number! No comparision possible:";
    }
    else
    {
        cout<<"The greatest digit in given number is:"<<value;
    }
    return 0;
}
int highestDigit(int x)
{
    int r=0, g=0;
    if (x <= 9 && x >= 0)
    {
        return 0;
    }
    else
    {
        g = x%10;
        while (x != 0)
        {
            r = x%10;
            x = x/10; 
            if (g <= x%10)
            {
                g = x%10;
            }
        }
        return g;
    }
}