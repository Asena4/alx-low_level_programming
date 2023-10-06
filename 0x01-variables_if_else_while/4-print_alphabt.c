#include <stdio.h>

/**
 * main - function that prints the alphabet in lower and upper case
 * Return: Return value is 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'e' && letter != 'q')
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
