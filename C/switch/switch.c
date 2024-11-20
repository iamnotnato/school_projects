#include <stdio.h>

/*
 * Program to Display Days of the Week
*/
int main()
{
	int day;
	printf("Please enter the day of the week:\n");
	scanf("%d",&day);
	
	/*
	* Check for Negative values
	*/
	
	
	switch(day)
	{
	case 1:
		printf("The day is Monday");
		break;
	case 2:
		printf("The day is Tuesday");
		break;
	default:
		printf("The day is a weeeknd");
	}
	return (0);
}
 	