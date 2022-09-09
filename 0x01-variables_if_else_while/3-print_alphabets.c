#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print the alphabet in lower case then in upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar (d);
		d++;
	}
	putchar ('\n');
	return (0);

}
