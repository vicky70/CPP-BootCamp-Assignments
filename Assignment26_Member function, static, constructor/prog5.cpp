// Define a class Date and write a program to Display Date and initialise date object
// using Constructors.
#include<iostream>
using namespace std;
class Date{
    private:
        int day, month, year;
    public:
        Date(int x, int y, int z){
            day = x;
            month = y;
            year = z;
        }
    void shoDate(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
int main(){
    Date d1(12, 10, 2022), d2(2, 10, 2022);
    d1.shoDate();
    d2.shoDate();
    return 0;
}