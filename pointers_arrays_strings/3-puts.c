
#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line
 * @str: Pointer to the string to print
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	write(1, str, i);
	write(1, "\n", 1);
}
