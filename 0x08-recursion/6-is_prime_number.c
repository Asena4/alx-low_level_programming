#include "main.h"

int the_prime(int n, int i);

/**
 * is_prime_number - shows if an integer is prime number or not
 * @n: number to evaluate
 * Return: value is 1 if n is prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (the_prime(n, n - 1));
}

/**
 * the_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: the iterator
 * Return: value is 1 if n is prime
 */
int the_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (the_prime(n, i - 1));
}
