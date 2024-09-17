// Nicole, 24T3 Week 2
// Write a program that takes in a radius and prints out the area of a circle

#include <stdio.h>

#define PI 3.1415

int main(void) {

	// scan in a radius input
	double radius;
	printf("Enter a radius: ");
	scanf("%lf", &radius);

	// calculate the area
	double area = PI * radius * radius;

	// print out our values
	printf("The area is %lf\n", area);

	return 0;
}
