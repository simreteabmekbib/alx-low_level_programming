#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: take number as input
 * Return: return last digit of a number
 **/

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
