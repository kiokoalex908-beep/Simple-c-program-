//simple c program
/*
Name :Mutunga Alex
Reg :CT100/G/26278/25
Description :Loan
*/
#include<stdio.h>
int main(){
          int age;
         int income;
         
        printf("Enter your age");
        scanf("%d", &age);
        
        printf("Enter your income (in sh)");
        scanf("%d", &income);
        if (age>=21 && income>=21000){
        
        printf("congratulation you qualify for the loan. \n");}
        
        else{
        
        printf("unfortunately, we are unable to offer you a loan at this time. \n");}
        
        return 0;}