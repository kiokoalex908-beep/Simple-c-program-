/*
NAME: Mutunga Alex
REG NO:CT100/G/26278/25
Description: simple c program to enter password
*/
#include<stdio.h>
int main(){
//declaration of variables
int password=1234;
int attempt;	
	
do{
  printf("enter the password   ");	
  scanf("%d",&attempt);
	
if(attempt==password){
   printf("acess granted\n");
   break;		
}
 else{
   printf("sorrry ,,incorrect password please try again\n");	 
	 
 }		
}	
while(attempt!=password);		
	
return 0;	
}