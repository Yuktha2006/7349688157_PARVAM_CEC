/*print the array element taking the input from the user*/
#include<stdio.h>
int main()
{
    int n=0,a[100],i;
    printf("enter the numbers")
    scanf("%d",&n);
    for(int i=0;i<n;scanf("%d",&a[i++]));
    for(int i=0;i<n;printf("%d",a[i++]));
    return 0;
}