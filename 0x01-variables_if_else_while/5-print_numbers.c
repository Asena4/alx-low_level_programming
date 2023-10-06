#include <stdio.h>

/**
 * main - main function prints the alphabet in lower and upper case
 * Return: return value is 0
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
