// Nicole, 24T3 Week 3
// Demonstrating how to scan in input until ctrl-d is pressed

#include <stdio.h>

int main(void) {
    
  char letter;
  // int scanf_returns = scanf(" %c", &letter);

  while (scanf(" %c", &letter) == 1) {
    printf("You have entered: %c\n", letter);
    // scanf_returns = scanf(" %c", &letter);
  }

	return 0;
}