#include <stdio.h>
/** main - prints a number, followed by a new line'
 * @argc: number of the arguments supplied to a program
 * @argv: array of pointers to the string
 * Result: Always 0
 */
int main(int argc __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

