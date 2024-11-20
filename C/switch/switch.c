#include <stdio.h>

/*
 * Program to Display Days of the Week
*/
int main(void)
{
	int day;
	printf("Please enter the day of the week:\n");
	scanf("%d",&day);
	
	/*
	* Check for Negative values
	*/
	while(day <= 0)
	{
	printf("Please enter the day of the week:\n");
	scanf("%d",&day);	
	}
	
	switch(day)
	{
	case 1:
		printf("The day is Monday");
		break;
	case 2:
		printf("The day is Tuesday");
		break;
	case 3:
		printf("The day is Wednesday");
		break;
	case 4:
		printf("The day is Thurday");
		break;
	case 5:
		printf("The day is Friday");
		break;
	default:
		printf("The day is a weeeknd");
	}
	return (0);
}
 	