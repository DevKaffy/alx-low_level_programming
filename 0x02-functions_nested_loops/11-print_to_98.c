#include "main.h"
#include "6-abs.c"
#include <stdio.h>

/**
 * print_to_98 - print n to 98 counts
 *
 * @n: input
 *
 */
void print_to_98(int n)
{
	int j;

	if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (j = n; j <= 98; j++)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}

