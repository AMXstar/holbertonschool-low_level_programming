
#include <unistd.h>

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string to print
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (len > 0)
	{
		len--;
		write(1, &s[len], 1);
	}
	write(1, "\n", 1);
}
