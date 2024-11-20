#include <stdio.h>

/*
 * Calculate te total,average 
 * 3 units and display grade
 */

int main()
{	
	int marks;
	int units= 3;
	int i= 0;
	int sum = 0;
	int average = 0;
	for (i=0;i < units;i++)
	{
	printf("Please enter the marks:\n");
	scanf("%d",&marks);	
	sum = sum + marks;
	}
	
	printf("The total is: %d\n",sum);
	
	average = sum / units;
	
	printf("The average is: %d\n",average);

	
	switch(average)
	{
		case 70 ... 100:
			printf("The grade is A\n");
			break;
		default:
			printf("The grade is F\n");
			break;
	}
	
	return (0);
}