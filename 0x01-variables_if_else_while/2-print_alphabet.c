#include <stdio.h>

/**
 * main - main function prints the alphabet in lowercase
 * Return: Return value is 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}
