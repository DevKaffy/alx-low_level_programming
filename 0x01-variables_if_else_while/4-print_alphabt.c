#include<stdio.h>

/**
 * main - print the letters of the alphabet except e and q
 *
 * Return: always returns 0
 *
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
			++i;
		putchar(i);
		++i;
	}
	putchar('\n');
	return (0);
}
