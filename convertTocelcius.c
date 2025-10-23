/*
Name: Mutunga Alex
REG NO: CT100/G/26278/25
Description:convert fahrenheit to celcius
*/

#include <stdio.h>
float convertToCelcius(float fahrenheit);

void main(){
  float fahreinheit;
  float celcius;
  
printf("Enter temperature in fahreinheit: ");
	scanf("%f",&fahreinheit);
	
celcius = convertToCelcius(fahreinheit);

	printf("temperature in celcius:%.2fc \n",celcius);
	return 0;
}

float convertToCelcius(float fahrenheit){
	return (fahrenheit-32) *5.0 / 9.0;
 }c