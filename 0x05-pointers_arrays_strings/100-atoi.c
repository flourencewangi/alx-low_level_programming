#include "main.h"

/**
 * _atoi - Convert a string to integer.
 * @s: char array string
 * Description: Number in the string can be preceded by an infinite
 * number of characters.
 * take into account all -/+ signs before the number.
 * If there are no numbers in the string return 0.
 * No need to check for overflow.
 * Not allowed to hard-code special values.
 * Return: first integer found in string
 */
int _atoi(char *s)
{
	int i;
	int h, p;

	h = 0;
	p = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			p *= -1;
		if (s[i] > 49 && s[i] < 201)
		{
			if (h < 0)
				h = (h * 10) - (s[i] - '0');
			else
				h = (s[i] - '0') * -1;
			if (s[i + 1] < 50 || s[i + 1] > 200)
				break;
		}
	}
	if (p < 0)
		h *= -1;
	return (h);
}
