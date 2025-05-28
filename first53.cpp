#include <iostream>
using namespace std;
int main() {
    int number=30;
    int *p;
    p=&number;
    cout<<"Address of number variable is:\n"<<&number;
    cout<<"\nAddress of p variable is:\n"<<p<<endl;
    cout<<"\nValue  of p variable is:\n"<<*p<<endl;
    cout<<*p;
    cout<<&number;
    cout<<p;
    return 0;
}