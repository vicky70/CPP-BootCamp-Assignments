// Define a class student and write a program to enter student details using constructor
// and define member function to display all the details
#include<iostream>
using namespace std;
class Student{
    private:
        char grade;
        int roll_no;
        char sec;
    public:
        Student(char g, int num, char s){
            
            grade = g;
            roll_no =  num;
            sec = s;
        }
        void dispaly(){
            cout<<"stduent grade: "<<grade<<endl<<"roll no: "<<roll_no<<endl<<"and sec : "<<sec;
        }
};
int main(){
    Student s1('A', 101, 'B');
    s1.dispaly();
    return 0;

}