#include "main.h"
#include <stdio.h>
/**
 * print_times_table - it prints times table
 * @n: input for matrix
 */

void print_times_table(int n)
{
	int i;
	int j;

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int r = i * j;

				if (j == 0)
					_putchar(r + '0');
				else if (r < 10)
				{
					printf(",   ");
					_putchar(r + '0');
				}
				else if (r < 100)
				{
					printf(",  ");
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				else if (r >= 100)
				{
					printf(", ");
					_putchar((r / 100) + '0');
					_putchar(((r / 10) % 10) + '0');
					_putchar((r % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
