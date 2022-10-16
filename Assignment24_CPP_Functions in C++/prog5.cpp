// Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
void numberInFibonacci(int);
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number:";
    cin>>n;
    numberInFibonacci(n);
    return 0;
}
void numberInFibonacci(int x)
{
    int first=0, second=1, flag=0;
    if (x <= 0)
    {
        cout<<"No";
    }
    else
    {
        while (second <= x)
        {
            if (second == x)
            {
                flag=1;
                cout<<"Given number is present in fibonacci series:";
                break;
            }
            else
            {
                int temp = first;
                first = second;
                second = temp + second;
            }
        }
        if (flag == 0)
        {
            cout<<"Given number is not present in fibonacci series:";
        }
    }
}