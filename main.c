#include <stdio.h>

int main() {
	double number = 0;

	printf("Please enter a number: ");
	scanf("%lf", &number);

	double *pointNumber = &number;
	double **pointToPoint = &pointNumber;

	printf("%lf at memory location %p\n", number, pointNumber);
	printf("%p at memory location %p\n", pointNumber, pointToPoint);
	return 0;
}
