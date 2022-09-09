#include <stdio.h>
/**
 * main - print the letters of the alphabet
 *
 * Return: always returns 0
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
