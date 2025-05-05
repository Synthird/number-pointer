#include <stdio.h>

int main()
{
	double number = 0;

	printf("Please enter a number: ");
	scanf("%lf", &number);

	printf("Your number %lf is at memory location %p", number, &number);

	return 0;
}
