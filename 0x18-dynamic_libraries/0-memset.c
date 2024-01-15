#include "main.h"

/**
  * _memset - main function of the prototype
  * @b: Value used to fill the memory
  * @s: Function paramater
  * @n: Function parameter
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
