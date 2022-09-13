#include "main.h"

/**
 * main - prints _putchar
 *
 * always return 0
 *
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 1; i <= 8; ++i)
	{
	       _putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
		       	       
