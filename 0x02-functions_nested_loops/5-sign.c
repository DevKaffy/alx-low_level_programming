#include "main.h"

/**
 * print_sign - main function
 *
 * @n: character to compare
 *
 * Result: always 0
 * 
 */

int print_sign (int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (0);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
		_putchar('-');
		return (0);
}	
