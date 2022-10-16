// Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time.
#include<iostream>
using namespace std;
class Time
{
private:
    int hr, min,sec;
public:
    void setValue(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }
    void display()
    {
        cout<<hr<<"hr "<<min<<"min "<<sec<<"sec";
    }
};
int main()
{
    Time t1;
    int hrs, min, sec;
    cout<<"Enter time in hr/min/sec formate:";
    cin>>hrs>>min>>sec;
    t1.setValue(hrs, min, sec);
    t1.display();
    return 0;
}