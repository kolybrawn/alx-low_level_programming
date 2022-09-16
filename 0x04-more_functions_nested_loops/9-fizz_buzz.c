#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print the numbers from 1 to 100,
 * followed by a new line, in a FizzBuzz manner
 * Return: Always 0, Successful
 */

int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
	if (i == 100)
	printf("%s", b);
	else if ((i % 3 == 0) && (i % 5 == 0))
	printf("%s ", fb);
	else if (i % 3 == 0)
	printf("%s ", f);
	else if (i % 5 == 0)
	printf("%s ", b);
	else
	printf("%d ", i);
	}
	printf("\n");
	return (0);
}
