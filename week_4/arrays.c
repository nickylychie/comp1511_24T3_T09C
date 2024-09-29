// Nicole, 24T3 Week 4
// Debugging activity
// This program should add 1 to any odd element in an array, then print 
// all elements in the array

#include <stdio.h>

#define SIZE 5

int main(void) {

    int array = {1, 2, 3, 4, 5};

    int i = 0;
    while (i < SIZE) {
        if (array.i % 2 == 0) {
            array.i += 1;
        }
    }

    int j = 1;
    while (j < SIZE) {
        printf("%c ", array.j);
    }

    printf("\n");

    return 0;
}
