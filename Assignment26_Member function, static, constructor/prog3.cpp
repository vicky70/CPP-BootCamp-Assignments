// Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
using namespace std;
class Cube{
    private:
        int side, volume;
    public:
        void calculateVolume(){
            volume = side*side*side;
        }
        void showData(){
            cout<<"Volume of cube is:"<<volume<<endl;
        }
        Cube(int x){
            side = x;            
        }

};
int main(){
    Cube c1(4), c2(9);
    c1.calculateVolume();
    c2.calculateVolume();
    c1.showData();
    c2.showData();
    return 0;
}