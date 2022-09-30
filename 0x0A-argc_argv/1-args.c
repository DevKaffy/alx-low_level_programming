#include <stdio.h>
/**
 * main - prints a number, followed by a new line
 * @argc: number of the arguments supplied to a program
 * @argv: array of pointers to the arguments
 * Return: Always 0
 */
int main(int argc, char  __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

