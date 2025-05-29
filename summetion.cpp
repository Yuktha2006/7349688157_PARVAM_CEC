#include<iostream>
int main()
{
    int i,n,sum=0;
    std::cout<<"enter the n numbers";
    std::cin>>n;
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
        std::cout<<"sum :"<<sum<<"\n";
    }
    std::cout<<" Total sum : "<<sum<<"\n";
return 0;
}
