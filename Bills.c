//simple c program
/*
Name :Mutunga Alex
Reg :CT100/G/26278/25
Description: program Bills
*/
#include<stdio.h>
int main(){
         int units ;
         float bills=0;
         
         printf("Enter water units used:");
         scanf("%d", &units);
         
         if(units <=30){ 
         bills=units *20;}
         
         else if(units<=60){
         bills=units *25;
         }
         else {bills=units *30;}
         
         printf("Total water bills %. 2f, \n", bills );
    return 0;
    }