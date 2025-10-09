/*
Name:Mutunga Alex
REG NO:CT100/G/26278/25
Description:simple c program of guessing game
*/

#include <stdio.h>
int main()
{
	int secret=15;
	int guess=0;
	
    while (guess!=secret){	
   {printf("Enter your guess (1-20):\n");
   scanf("%d",&guess);
   }
    if(guess==secret){
			printf("Congratulation! \n");
		}
    else if(guess> 16){
		printf("Too High  \n");}
	
	else if(guess <10){
	printf("Too Low \n");}

	}
	
	return 0;
}