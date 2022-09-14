#include "main.h"
/**
 * print_sign - function that prints tge sign if a number
 * @n: number in which the sign will be printed
 * Return: 1 if n us greater than zero;
 * 0 if n is zero;
 * -1 if n us less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
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
