// Define a Class Complex to represent a Complex number with instanCe variables a and
// b to store real and imaginary parts. Also define following member funCtions
// a. void setData(int,int)
// b. void showData()
// C. Complex add(Complex)
#include<iostream>
using namespace std;
class Complex{
    private:
        int a;
        int b;
    public:
        void setData(int x, int y)
        {
            a = x;
            b = y;
        }
        void showData(){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
        Complex add(Complex C){
            Complex temp;
            temp.a = a + C.a;
            temp.b = b + C.b;
            return temp;
        }
};
int main()
{
    Complex C1, C2, C3;
    C1.setData(3, 4);
    C2.setData(5, 6);
    C3 = C1.add(C2);
    C1.showData();
    C2.showData();
    C3.showData();
    return 0;
}