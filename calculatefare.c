/*
Name:mutunga Alex
REG NO:CT100/G/26278/25
Description :calculating fare
*/

#include <stdio.h>

float calculatefare(float distance);
void main(){
 float distance;
 float fare;
 
printf("Enter distance travelled in kilometers:");
scanf("%f",&distance);

fare =calculatefare(distance);
printf("Total fare is:Ksh %.2f\n",fare);

return 0;	
}
 
float calculatefare(float distance){
float fare;
 fare=distance * 50;
	return fare;
	
}