//simple c program
/*
Name: Mutunga Alex
Reg :CT100/G/26278/25
Description :finding volume and surface_area
*/
#include<stdio.h>
#define pi 3.14159
int main() {
           float radius, height, volume, surface_area;
          
          printf("Enter the radius of the cylinder (cm):");
          scanf("%f", &radius );
          
          printf("Enter the height of the cylinder (cm):");
          scanf("%f", &height );
          
            volume= pi * radius * radius * height; 
            surface_area =2 * pi * radius *radius +2 * pi * radius * height ;
            
            printf("volume of the cylinder %.2f\n", volume);
            printf("surface_area of the cylinder %.2f\n", surface_area );
            return 0;
            }