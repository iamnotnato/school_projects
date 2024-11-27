#include <stdio.h>

/*
 * Display numbers divisible by 7
 * For range 0 to 30
 */

int main(void)
{
	int num = 0;
	while (num <=30)
	{
		if(num%7 == 0)
		{
		printf("%d\n",num);	
		}
		
		num++;
	}
	return 0;
}