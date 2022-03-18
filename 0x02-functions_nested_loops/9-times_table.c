#include "main.h"
/**
 * times_table - print 9 times table
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int r = i * j;

			if (r < 10)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');					
					_putchar(' ');					
				}
				_putchar(r + '0');				
			}
			else if (r >= 10)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');	
				}	
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');			
							
			}
		}
		_putchar('\n');
	} 
}
