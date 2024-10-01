// Nicole, 24T3 Week 4
// Function demo: create a function to 
// add 2 numbers together

#include <stdio.h>

int add(int num1, int num2);

int main() {
    int result;
    int num1 = 5;
    int num2 = 3;

    // TODO
    result = add(num1, num2);

    printf("Result: %d\n", result);
    return 0;
}

int add(int num1, int num2) {
    return num1 + num2;
}
