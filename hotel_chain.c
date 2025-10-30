/*
Name:Mutunga Alex 
REG NO:CT100/G/26278/25
Description:3D array to display hotel occupancy 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10]; 
    int branch, floor, room;
    int totalOccupied = 0;

    srand(time(0));

    printf("    Room Occupancy with multiple branches.   \n");

    for (branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;
        
    for (floor = 0; floor < 5; floor++) {
    
    for (room = 0; room < 10; room++) {
        
        chain[branch][floor][room] = rand() % 2;
    if (chain[branch][floor][room] == 1)
           branchOccupied++;
       }
       }
    totalOccupied += branchOccupied;
    printf("     Branch %d :occupied rooms  %d\n", branch + 1, branchOccupied);
    }

    printf("\ntotal occupied rooms on all the  branches are:  %d\n", totalOccupied);

    return 0;
}