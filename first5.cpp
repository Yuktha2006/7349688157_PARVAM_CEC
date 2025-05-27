#include <iostream>
int main()
{
    std::string name,branch,college;
    int year,sem;
    std::cout<<"enter your name:";
    std::getline(std::cin,name);
    std::cout<<"enter your branch:";
    std::getline(std::cin,branch);
    std::cout<<"enter the year:";
    std::cin>>year;
    std::cout<<"enter the semester:";
    std::cin>>sem;
    std::cout<<"enter the college:";
    std::cin>>college;
    std::getline(std::cin,college);
    std::cout<<"\n your details";
    std::cout<<"\n Name:"<<name;
    std::cout<<"\n Branch:"<<branch;
    std::cout<<"\n Year:"<<year;
    std::cout<<"\n Semester:"<<sem;
    std::cout<<"\n college:"<<college;
    return 0;

}