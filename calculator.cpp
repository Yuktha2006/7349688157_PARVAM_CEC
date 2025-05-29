#include <iostream>
#include <math.h>  
using namespace std;
int main() 
{
    char op;
    float n1,n2;
    cout<<"Enter the operator (+, -, *, /): ";
    cin>>op;
    cout<<"Enter two operends:";
    cin>>n1>>n2;
    switch(op)

    {
       case'+':
        cout<<n1<<"+"<<n2<<"="<<n1+n2;
        break;
       case'-':
        cout<<n1<<"-"<<n2<<"="<<n1-n2;
        break;
       case'*':
        cout<<n1<<"*"<<n2<<"="<<n1*n2;
        break;
       case'/':
        cout<<n1<<"/"<<n2<<"="<<n1/n2;
        break;
       default:
       cout<<"invalid operator";
    }
    
    
  return 0; 
}       
