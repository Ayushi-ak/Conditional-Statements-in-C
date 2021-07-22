//Program To Check Whether A Person Is Eligible To Vote Or Not
#include<stdio.h>
int main()
{
	int age;
	printf("\n");
	printf("Enter the age:");
	scanf("%d",&age);
	printf("\n");
	
	if(age>=18)
	{
	   printf("Person is eligible to vote"); 		
    }
    else
    {
    	printf("Person is not eligible to vote");
	}
    printf("\n");
}
