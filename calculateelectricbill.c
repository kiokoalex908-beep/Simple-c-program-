/*
Name:mutunga alex
REG NO:CT100/G/26278/25
Description:calculating electrical bill
*/
#include<stdio.h>

float calculateelectricbill(int units);
void main()	{
int units;		
float bill;
printf("enter the number of units  consumed   ");
scanf("%d",&units);

bill=calculateelectricbill( units);
printf("the total bill is %.2f",bill);
}

float calculateelectricbill(int units){
int bill;
if (units<=100){
	bill=units * 10;
}
else if	(units>100,units<=200){
	bill=units * 15;
}
else
	bill=units * 20;		
return bill;
	
}