#include <stdio.h>

void displayNumber(double *number);

int main() {
	double firstNumber = 0;
	double secondNumber = 0;

	printf("Please enter a number: ");
	scanf("%lf", &firstNumber);

	printf("Please enter another number: ");
	scanf("%lf", &secondNumber);

	displayNumber(&firstNumber);
	displayNumber(&secondNumber);

	return 0;
}

void displayNumber(double *number) {
	printf("%lf at memory location %p\n", (*number), *number);
}
