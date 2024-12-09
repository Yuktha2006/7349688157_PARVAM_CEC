#include<stdio.h>
int main()
{
    int limit=0,result=2,counter=1;
    printf("Enter the limit of the power of 2:");
    scanf("%d",&limit);
    counter=1;
    do
    {
     printf("%d\n",result);
     result*=2;
     counter=counter+1;
    }
    while(counter<=limit);
    
return 0;

}