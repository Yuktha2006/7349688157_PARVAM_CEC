/*summestion using loop*/
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("First %d natural numbers are:\n",n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("%d ",i);

    }

    printf("the summestion of %d is %d",n,sum);
    
  return 0;
}            
        
    
