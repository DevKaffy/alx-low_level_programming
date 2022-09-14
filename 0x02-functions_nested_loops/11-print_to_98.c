#include "main.h"
#include "6-abs.c"
#include <stdio.h>

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

