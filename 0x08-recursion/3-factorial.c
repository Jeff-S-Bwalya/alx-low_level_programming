#include "main.h"

/**
 * factorial - Calculate the factorial of a number
 *
 * @n: the number to calculate the factorial
 *
 * Return: integer value
 */

unsigned long long int factorial(unsigned int )
{
	if(n <= 1)
	{
		return 1;
	}
	return n * factorial(n - 1);
}
int  main()
{
	printf("Factorial of %d is %d\n", n, factorial(5));
	return 0;
}
