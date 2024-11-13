#include <stdio.h>

/*
 * Simple Program to Calculate 
 * The electricity bill. 
 * Units >=100 | Rate Per Unit = 10 | Fixed  = 300 | Fuel = 200
 * Units <=99  | Rate Per Unit = 8  | Fixed  = 250 | Fuel = 150
 * Units <=49  | Rate Per Unit = 5  | Fixed  = 200 | Fuel = 100
 * Units <=30  | Rate Per Unit = 5  | Fixed  = 150 | Fuel = 100
 */

const int bill100[3] = {10,300,200};
const int bill50[3] = {8,250,150};
const int bill30[3] = {5,200,100};
const int bill20[3] = {5,150,100};

int meter_reading();
int calculate_bill(void);
int meter,rate;
int main(void)
{
meter_reading();
calculate_bill();
return (0);
}

/*
 * Handle Negative Values
 */
int meter_reading()
{
printf("Please enter the meter reading:\n");
scanf("%d",&meter);

while (meter <=- 1)
{
printf("Please enter the meter reading:\n");
scanf("%d",&meter);
}
return meter;
}

/*
 * Calculate Bill
 */
int calculate_bill(void)
{
	if (meter >=100)
{
	rate = ((meter * bill100[0]) + bill100[1] +  bill100[2]);
	printf("%d\n",rate);
}
else if (meter >=50)
{
	rate = ((meter * bill50[0]) + bill50[1] +  bill50[2]);
	printf("%d\n",rate);
}
else if (meter >=30)
{
	rate = ((meter * bill30[0]) + bill30[1] +  bill30[2]);
	printf("%d\n",rate);
}
else
{
	rate = ((meter * bill20[0]) + bill20[1] +  bill20[2]);
	printf("%d\n",rate);
}

}
