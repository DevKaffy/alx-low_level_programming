#include<stdio.h>

/**
 * main - all possible different combination of two digits
 *
 * Return: always 0
 *
 */
int main(void)
{
	int a;
	int b;

	for (a = 10; a <= 19; a++)
	{
		for (b = 10; b <= 19; b++)
		{
			if ((b % 10) > (a % 10))
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				if (a != 18 || b != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
