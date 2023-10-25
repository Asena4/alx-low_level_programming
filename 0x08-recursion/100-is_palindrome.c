#include "main.h"

int search_palnd(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: value is 1
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (search_palnd(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * search_palnd - searches characters recursively for palindrome
 * @s: string to check
 * @i: the iterator
 * @len: length of the string
 * Return: value is 1 if palindrome
 */
int search_palnd(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (search_palnd(s, i + 1, len - 1));
}
