#include<unistd.h>

/**
 * main - print the letters of the alphabet except e and q
 *
 * Return: always returns 0
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
