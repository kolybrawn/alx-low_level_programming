#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints all possible combintions of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
