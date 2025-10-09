/*
Name:Mutunga Alex
Reg no:Ct100/g/26278/25
Description:simple c program displaying withdrawals using do while loop
*/

#include<stdio.h>
int main(){
 // declaration of variables
 float balance =1000;
 int amount;
 int i;
 
while(amount>0)	
{
	printf("enter amount to withdraw  ");
	scanf("%d",&amount);
	--i;
	
if(amount==balance){
 printf("sucessful the balance is 0\n");
 break;
}
else if(amount>balance){
	printf("insuffiscient funds your current balance is %.2f\n",balance);
}

else if (balance-=amount){
	printf("succesful transaction the balance is %.2f\n",balance);
}
		
else{
	printf("insuffiscient funds in your account");
}
}		
return 0;
	
}