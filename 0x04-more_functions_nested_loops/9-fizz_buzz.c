#include <stdio.h>
/**
 * main - main function
 *
 * Return: a number
 */
int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf('Fizz');
			}
			if (i % 5 == 0)
			{
				printf('Buzz');
			}
		} else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(' ');
	}
	printf('\n');
	return (0);
}
