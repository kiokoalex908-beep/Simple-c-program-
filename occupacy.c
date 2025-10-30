/*
Name:Mutunga Alex 
REG NO:CT100/G/26278/25
Description:2D array to display hotel occupancy 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
//Declaration of variables 
    int occupancy[5][10]; 
    int floor, room;
    int occupied, vacant;

    srand(time(0)); 

    printf(" Hotel Room occupancy (One Branch)       \n");

    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

    for (room = 0; room < 10; room++) {
          occupancy[floor][room] = rand() % 2; 

    if (occupancy[floor][room] == 1)
           occupied++;
    else
            vacant++;
    }

     printf("    Floor %d: occupied %d, vacant %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}