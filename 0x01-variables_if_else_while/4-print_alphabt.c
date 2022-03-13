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
	char hello[] = "abcdefghijklmnopqrstuvwxyz\n";
	char *s;

	s = hello;

	while (*s != '\0')
	{
		if (*s == 'q' || *s == 'e')
			s++;
			continue;
		putchar(*s);
		s++;
	}
	return (0);
}

