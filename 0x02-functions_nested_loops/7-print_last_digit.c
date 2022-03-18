#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: take number as input
 * Return: return last digit of a number
 **/

int print_last_digit(int n)
{
	int l = n % 10;

	if (n < 0)
		l = (-1 * n) % 10;
	_putchar(l + '0');
	return (l);
}
