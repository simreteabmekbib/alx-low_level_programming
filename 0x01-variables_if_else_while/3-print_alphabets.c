#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description: print alphabets using putchar
 * Return: 0
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	char *a;

	a = alpha;

	while (*a != '\0')
	{
		putchar(*a);
		a++;
	}
	return (0);
}

