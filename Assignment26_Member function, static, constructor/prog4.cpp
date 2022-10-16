// Define a class Counter and Write a program to Show Counter using Constructor
#include<iostream>
using namespace std;
class Counter{
    private:
        static int count;
    public:
        Counter(){
            count++;
        }
        void dispaly(){
            cout<<"Default constructor is called: "<<count<<" times"<<endl;
        }
};
int Counter:: count;
int main(){
    Counter c1, c2, c3;
    c1.dispaly();
    return 0;
}