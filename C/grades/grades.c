#include <stdio.h>

/*
* Calculate Sum,Average
* Display Total
*/
int marks,total,average,n,i;

int main(void)
{
	/* Prompt for number of subjects */
	printf("How many subjects?");
	scanf("%d",&n);
	
	for (i=0; i < n; i++) {
	printf("Please input the marks:\n");
	scanf("%d",&marks);
	
	while (marks <0)
	{
	printf("Please input the marks:\n");
	scanf("%d",&marks);
	}
	total = marks + total;	
	}
	
	float(average) = total/n;

	
	printf("The total is : %d\n",total);
	printf("The average is :%.1f\n",average);
	return 0;
}
