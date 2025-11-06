/*
NAME: MUTUNGA ALEX
REG NO:CT100/G/26278/25
Description:c program that takes book titles and stores them on a text file
*/

#include<stdio.h>

int main(){
//Declaration of variables
char book_title[100];

FILE *fptr;
fptr=fopen("borrowed_books.txt" , "a");

//error handling
if (fptr==NULL)	{
printf("error occured during file opening");
return 0;		
}
// taking user inputs
printf("enter the  boook title borrowed:\n");	
scanf(" %99s", book_title);

//writting into the file
	
fprintf(fptr, "the user entered : %s\n",book_title);	
		
fclose(fptr);

printf("the title has been successfully added to the file \n");	
	
return 0;	
}