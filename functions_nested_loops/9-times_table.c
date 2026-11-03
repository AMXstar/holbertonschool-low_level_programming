#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i;
	int j;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (n < 10)
					_putchar(' ');
			}
			if (n >= 10)
				_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		_putchar('\n');
	}
}
