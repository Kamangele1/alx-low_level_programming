#include <stdio.h>

/**
 * main - prints the name of the file program
 *  was compiled from,followed by anew line
 *  Return: Always 0
 */
int main(void)
{
	printf("%s\n", __FILE__ );
	return (0);
}
