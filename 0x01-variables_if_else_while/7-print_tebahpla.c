#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: print a-z in reverse
 *
 * Return: always returns 0
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
