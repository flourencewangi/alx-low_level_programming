#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 *  Return: 0 if s1 and s2 are equals,
 *  another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int R;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	R = s1[i] - s2[i];
	return (R);
}
