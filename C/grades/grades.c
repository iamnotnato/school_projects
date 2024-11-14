#include <stdio.h>

/*
* Calculate Sum,Average
* Display Total
*/
int marks,total,average,n,i;

int main(void)
{

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
	
	average = marks/n;

	
	printf("%d\n",total);
	printf("%d\n",average);
	return 0;
}
