/*C Program to Generate numerical patterns
	1 2 3 4 5 
	1 2 3 4   
	1 2 3 
	1 2
	1
	*/
#include<stdio.h>

int main()
{
	int n=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%d ",j+1);
		}
		printf("\n");
	}
}







