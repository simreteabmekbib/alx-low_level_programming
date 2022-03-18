#include <stdio.h>
/**
 * main - print sum of the multiple of 3 or 5
 */
void main(void)
{
	int i;

	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
		sum += i;
		}
	}
	printf("%d", sum);
}
