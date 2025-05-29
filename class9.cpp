#include <iostream>
using namespace std;
class Student
{
    public:
        int id;
        string name;
        Student(int i, string n)
        {
            id =i;
            name = n;
        }
        void display()
        {
            cout<<id<<"  "<<name<<"  "<<endl;
        }
    };
    int main(void){
        Student s1=Student(71,"Yuktha");
        Student s2=Student(45,"Nishkala");
        s1.display();
        s2.display();
        return 0;
}    
