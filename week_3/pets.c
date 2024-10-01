// Nicole, 24T3 Week 3
// Using structs and enums to make a pets program

#include <stdio.h>

// Define an enum for types of animals
enum animal_types {
  DOG,
  CAT,
  RAT,
  SHARK,
  CRAB,
  GIRAFFE,
  ORANGUTAN
}

enum colour {
  RED,
  BLUE,
  YELLOW
}

// Define a struct for pets
struct pet {
  int lifespan;
  double tameability;
  enum animal_type animal;
  enum colour c;
}

int main(void) {
    
  // Create a pet

  // Print it's details

	return 0;
}