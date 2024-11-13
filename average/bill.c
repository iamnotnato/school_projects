#include <stdio.h>


//Units 100 and above Rate Per Unit = 10 Fixed  = 300 Fuel = 200
//Units 50 - 99 Rate Per Unit = 8 Fixed  = 250 Fuel = 150
//Units 30 - 49 Rate Per Unit = 5 Fixed  = 200 Fuel = 100
//Below 30 Rate Per Unit = 5 Fixed  = 150 Fuel = 100

int main(void)
{
int meter,rate;
int	bill100[2] = {10,300,200};
int	bill50[2] = {8,250,150};
int	bill30[2] = {5,200,100};
int	bill20[2] = {5,150,100};

printf("Please eneter the meter reading:\n");
scanf("%d",&meter);

if (meter >=100)
{
	rate = ((meter * bill100[0]) + bill100[1] +  bill100[2]);
	printf("%d\n",rate);
}
if (meter >=50)
{
	rate = ((meter * bill100[0]) + bill100[1] +  bill100[2]);
	printf("%d\n",rate);
}
if (meter >=50)
{
	rate = ((meter * bill100[0]) + bill100[1] +  bill100[2]);
	printf("%d\n",rate);
}
if (meter >=50)
{
	rate = ((meter * bill100[0]) + bill100[1] +  bill100[2]);
	printf("%d\n",rate);
}
printf("%d\n",meter);
	return 0;
}