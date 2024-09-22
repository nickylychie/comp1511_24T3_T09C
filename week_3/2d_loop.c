// Nicole, 24T3 Week 3
// Demo of 2d while loops by printing 4 x 4 o's

#include <stdio.h>

#define SIZE 4

int main(void) {

    // Print this:
    // o o o o 
    // o o o o 
    // o o o o 
    // o o o o 

    int x = 0;
    while (x < SIZE) {
        printf("o ");
        x++;
    }
    printf("\n");

    return 0;
}
