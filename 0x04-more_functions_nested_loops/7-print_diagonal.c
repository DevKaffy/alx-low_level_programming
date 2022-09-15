#include "main.h"
/**
 * print_diagonal - prints diagonal stuff
 *
 * @n: integer to set diagonal
 */
void print_diagonal(int n)
{
	int h;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (h = 0; h < n; h++)
		{
			for (i = 0; i < h; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
