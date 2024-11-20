#include <stdio.h>

/*
 * Calculate te total,average 
 * 3 units and display grade
 */
int average = 0;

int calc_grade();

int main(void)
{	
	int marks;
	int units= 3;
	int i= 0;
	int sum = 0;

	for (i=0;i < units;i++)
	{
	printf("Please enter the marks:\n");
	scanf("%d",&marks);	
	
	/*Check for invalid marks*/
	while(marks < 0 || marks > 100)
	{
	printf("Please enter the marks:\n");
	scanf("%d",&marks);	
	}
	sum = sum + marks;
	}
	
	printf("The total is: %d\n",sum);
	
	average = sum / units;
	
	printf("The average is: %d\n",average);
	
	
	int calc_grade();
	
	return (0);
}
	
	
	int calc_grade()
	{
	switch(average)
	{
		case 70 ... 100:
			printf("The grade is A\n");
			break;
		
		case 60 ... 69:
			printf("The grade is B\n");
			break;
		
		case 50 ... 59:
			printf("The grade is C\n");
			break;
		
		case 40 ... 49:
			printf("The grade is D\n");
			break;
		
		default:
			printf("The grade is F\n");
			break;
	}
	return average;	
	}

	
	
	
