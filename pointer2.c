#include<stdio.h>
int main()
{
   int size=0,a[100],i,*Ap=a;
   scanf("%d",&size);
   for(i=0;i<size;scanf("%d",&a[i++]));
   for(i=0;i<size;printf("%d",*Ap),Ap++,i++);
 return 0;
}