#include "main.h"

/**
 *puts_half - prints half of the string
 *@str: string being tested
 *
 */

void puts_half(char *str)
{
	int ct, even, neg;

	for (ct = 0; str[ct] != '\0'; ct++)
		;
	if ((ct % 2) == 0)
	{
		for (even = ct / 2; str[even] != '\0'; even++)
			_putchar(str[even]);
	}
	else
	{
		for (neg = (ct - 1) / 2; str[neg] != '\0'; neg++)
			_putchar(str[neg + 1]);
	}
	_putchar('\n');
}
