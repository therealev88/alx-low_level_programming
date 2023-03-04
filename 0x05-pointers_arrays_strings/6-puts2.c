#include "main.h"
#include <stdio.h>
/**
 * puts2 - Entry Point
 * Description: prints a string followed by a new line
 * @str: pointer to the string to print
 * Return: Point of no return (void)
 */
void puts2(char *str)
{
int index = 0;
while (str[index] != '\0')
{
	if (index % 2 == 0)
	{
		_putchar(str[index]);
	}

	index++;
}
_putchar('\n');
}
