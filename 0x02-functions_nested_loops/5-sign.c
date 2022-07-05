#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @q: takes in an integer
 * Return: 1 if q is > zero, 0 if n is zero, -1 if n is < zero
 */
int print_sign(int q)
{
	if (q > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (q == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
