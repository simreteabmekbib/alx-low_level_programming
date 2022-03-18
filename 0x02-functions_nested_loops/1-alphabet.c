#include "main.h"
/*
 *des: print alphabet in lowercase
 *use main.h
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

}
