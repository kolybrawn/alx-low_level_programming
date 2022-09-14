#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints _putchar, followed by a new line
 *
 * Retur: Always 0 (Success)
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		putchar(*sh);
			sh++;
	}
	putchar('\n');

	return (0);
}
