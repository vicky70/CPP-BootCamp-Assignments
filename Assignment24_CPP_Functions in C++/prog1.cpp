// Define a function to check whether a given number is a Prime number or not.
#include<iostream>
int primeFunc(int);
using namespace std;
int main()
{
    int prime, isPrime;
    cout<<"Enter any number:";
    cin>>prime;
    isPrime = primeFunc(prime);
    if (isPrime == 1)
    {
        cout<<"Given nuber is a Prime number:";
    }
    else
    {
        cout<<"Given nuber is not a Prime number:";
    }
}
int primeFunc(int x)
{
    int i;
    for ( i = 2; i < x; i++)
    {
        if (x%i == 0)
        {
            return 0;
        }
    }
    return 1;
}