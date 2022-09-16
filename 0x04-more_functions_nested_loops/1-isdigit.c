#include "main.h"

/**
 * _isdigit - function to check for a digit
 * @c: character to be considered
 * Return: return 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	return (1);
	else
	return (0);
}
