#include "main.h"

/**
 * flip_bits - counts number of bits to change
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count_bit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			count_bit++;
	}

	return (count_bit);
}
