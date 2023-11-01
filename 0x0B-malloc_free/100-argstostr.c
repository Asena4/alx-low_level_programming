#include "main.h"

/**
 *_strlen - find length of string
 *@s: string
 *Return: size int
 */
int _strlen(char *s)
{
	int size = 0;

	for (size = 0; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 **argstostr - concatenates all the arguments
 *@ac: int parameter
 *@av: char argument
 *Return: string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, calc = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, nc++)
		nc += _strlen(av[i]);
	str = malloc(sizeof(char) * nc + 1);
	if (str == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, calc++)
			str[calc] = av[i][j];
		str[calc] = '\n';
		calc++;
	}
	str[calc] = '\0';
	return (str);
}
