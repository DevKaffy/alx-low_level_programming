#include "main.h"

/**
 * _strcmp - compares pointers to two strings.
 * @s1: pointer to the first string to be compared.
 * @s2: pointer to the second string to be compared.
 * Return: If str1 < str2, d negative diff of the first unmatched characters.
 * If srt1 == str2, 0
 * If str1 > str2, d positive diff of the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
