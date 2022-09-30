#include <stdio.h>
/**
 * main - multiplies two numbers, followed by a new line
 * @argc: number of the arguments supplied to a program
 * @argv: array of pointers to the arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
