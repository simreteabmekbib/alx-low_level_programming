#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	char num[] = "0123456789\n";
	char *s;

	s = num;

	while (*s != '\0')
	{
		putchar(*s);
		s++;
	}
	return (0);
}

