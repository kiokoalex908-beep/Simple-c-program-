//simple c program
/*
Name :Mutunga Alex
Reg :CT100/G/26278/25
Description: Data 
*/
#include<stdio.h>
int main(){
         int choice ;
         printf("select data bundle :\n");
         printf("1. 100MB @ KES50\n");
         printf("2.500MB @ KES200\n");
         printf("3.1GB @ KES350\n");
         printf("4.2GB @ KES600\n");
         
         printf("Enter your choice (1-4):");
         scanf("%d", &choice);
         
         switch (choice ){
         case 1:
         printf("You selected 100MB. Cost=KES50 \n");
           break;
         case 2:
         printf("You selected 500MB. Cost=KES200\n ");
            break;
          case 3:
          printf("You selected 1GB. Cost=KES350\n");
         
           break;
          case 4:
          printf("You selected 2GB. Cost KES600\n");
          
          break;
          default:
          printf("Invalid choice\n");}
    return 0;
    }