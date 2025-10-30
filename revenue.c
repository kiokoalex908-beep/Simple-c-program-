/*
Name:Mutunga Alex 
REG NO:CT100/G/26278/25
Description:1D array to display revenue 
*/

#include<stdio.h>

int main(){
//declaration of variables
int sum = 0;
int average =0;
int i;
char *days[7]={"monday","tuesday","wednesday", "thursday","friday","sarturday","sunday"};	
int revenue [7]={100,200,300,400,500,600,700};
 	
//start,stop,step
for ( i=0;i<7;i++){
sum+=revenue[i];
average=sum/7;	
printf ("%s,revenue= %d\n",days[i],revenue [i]);	
}	
	
printf("total revenue  is %d\n",sum);	
printf("the average revenue is %d",average);	
return 0;	
	
}