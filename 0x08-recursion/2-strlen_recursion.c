#include "main.h"
/**
 * _strlen_recursion - Return the length of a string.
 * @s: The sting to be measured.
 * Return: The length of a string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
