#include <stdio.h>
#include <unistd.h>

/**
 * main -  prints char below 10
 * Return: return value is 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
