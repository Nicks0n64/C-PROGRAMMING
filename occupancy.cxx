#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int occupied, vacant;

    srand(time(0)); 

    printf("=== Room Occupancy (One Branch) ===\n");

    for (int floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
            
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}