#include <math.h>
#include <stdio.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 * Return: Always 0 (sucess)
 */

int main(void)

{
	long x, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
	if (number % x == 0)
	{
	maxf = number / x;
	}
	}
	printf("%ld\nn".maxf);
	return (0);
}
