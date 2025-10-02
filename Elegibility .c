//simple c program
/*
Name :Mutunga Alex
Reg :CT100/G/26278/25
Description: program for exam elegibility
*/
#include<stdio.h>
int main(){
    float attendance, average_marks;
    
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance );
    
    printf("Enter average_marks :");
    scanf("%f", &average_marks );
    
    if(attendance>=0.75 && average_marks>=40){
    printf("elegible for final exam\n");}
    
    else{
    printf("Not elegible  for final exam\n");}
    
    return 0;
    }