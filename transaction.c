/*
NAME: MUTUNGA ALEX
REG NO:CT100/G/26278/25
Description:c program that takes book titles and stores them on a text file
*/

#include<stdio.h>
#include <stdlib.h>

int main(){
//Declaration of variables
float transaction;
float total_sales=0;

FILE *fptr;
// opeaning of file

fptr=fopen("sales.txt" , "a+");
//error handling
 if(fptr==NULL){
  printf("error during file opening");	
  return 0;
}
// taking user inputs
printf("enter the amount of transaction :\n");
scanf(" %f",&transaction);

  total_sales += transaction;
  
printf(" total sales is % .2f\n",&total_sales);             

//writting into the file
fprintf(fptr, "the user entered %f\n ",transaction);
fprintf(fptr, "total sales is %.2f",total_sales);
		
printf("the transaction has been successfully added to the file \n");
   
 fclose(fptr); 	
return 0;	
}