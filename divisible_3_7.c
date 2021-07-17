// Program to print the numbers which are divisible by both 3 and 7.
#include<stdio.h>
int main()
{
	int n,i;
	
	printf("\n");
	printf("Enter the range :");
	scanf("%d",&n);
	printf("\n");
	 
	for(i=1;i<=n;i++)
	{
        if(i%3==0 && i%7==0)
	    {
            printf(" %d ",i);
        }
    }
    printf("\n");
}
