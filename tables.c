#include<stdio.h>
int main()
{
    int number,i;
    printf("Enter the number for multiplication table:");
    scanf("%d",&number);
    printf("USING FOR LOOP\n");
    for(i=10;i>=1;i--)
    {
        printf("%d*%d=%d\n",number,i,number*i);
    }
        printf("USING WHILE LOOP\n");
    i=10;
    while(i>=1)
    {
        printf("%d*%d=%d\n",number,i,number*i);
        i--;
    }
    printf("USING DOWHILE LOOP\n");
    i=10;
    do{
        printf("%d*%d=%d\n",number,i,number*i);
        i--;
    }
    while(i>=1);
    
 return 0;
}