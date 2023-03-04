#include "main.h"
#include <stdio.h>
/**
 * print_rev - Entry point
 * Description: Print a str in reversem followed by a new line
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
