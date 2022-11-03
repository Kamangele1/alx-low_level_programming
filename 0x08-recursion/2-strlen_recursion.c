#include "main.h"
/**
 * _strlen_recursion - Return the length of a string.
 * @s: The string to be measured.
 * Return: The length of a string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	return (1 + _strlen_recursion(s + 1));
	else
	return (0);
}
