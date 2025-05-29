#include <iostream>
using namespace std;
class Employee
{
    public:
          Employee()
          {
            cout<<"Default Constructor Invoked\n";

          }
          ~Employee()
          {
            cout<<"Destructor Evoked \n";
          }
};
int main(void)
{
    cout<<"in main func\n";
    cout<<"1st obj\n";
    Employee e1;
    cout<<"2nd obj\n";
    Employee e2;
    cout<<"Ending Main Func\n";
    return 0;
}
