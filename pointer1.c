#include<stdio.h>
int main()
{
    int n=0,*p=&n;
    scanf("%d",&n);
    *p=58;
    printf("Var n value %d \n",n);
  return 0;
} 