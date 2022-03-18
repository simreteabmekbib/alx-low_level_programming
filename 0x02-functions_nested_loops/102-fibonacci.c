#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci
 * Return: 0 always
 */
int main(void)
{
	int i;

	int a = 0;
	int b = 1;
	int r = a + b;

	for (i = 0; i < 50; i++)
	{
		if (i < 49)
			printf("%d, ", r);
		else
			printf("%d\n", r);
		a = b;
		b = r;
		r = a + b;
	}
	return (0);
}
