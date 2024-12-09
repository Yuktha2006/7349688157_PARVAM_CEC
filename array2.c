#include<stdio.h>
int main()
{
    int n=0,a[100],i,esum=0,osum=0;
    scanf("%d",&n);
    for(int i=0;i<n;scanf("%d",&a[i++]));
    for(i=0;i<n;i++)
    {
      printf("%d",a[i]);
      if(a[i]%2==0)
        esum+=a[i];
      else
        osum+=a[i];
    }        
    printf("\nsum of even %d odd %d",esum,osum);
    return 0;
}