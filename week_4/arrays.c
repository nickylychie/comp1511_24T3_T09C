// Nicole, 24T3 Week 4
// Debugging activity
// This program should add 1 to any 
// odd element in an array, then print 
// all elements in the array

#include <stdio.h>

#define SIZE 5

int main(void) {

    int array[SIZE] = {1, 2, 3, 4, 5};
    // 2, 2, 4, 4, 5
    // printf("1\n");
    int i = 0;
    while (i < SIZE) {
        if (array[i] % 2 != 0) {
            array[i] += 1;
        }
        i++;
    }
    // printf("2\n");
    int j = 0;
    while (j < SIZE) {
        printf("%d ", array[j]);
        j++;
    }
    // printf("3\n");
    printf("\n");

    return 0;
}
