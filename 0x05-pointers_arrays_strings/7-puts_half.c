#include "main.h"
#include <stdio.h>
/**
 * puts_half - Entry Point
 * Description: Print second half of a string
 * If Odd numbers of chars, print (length -1) / 2
 * @str: char array string type
 * Return: Point of no return (void)
 */
void puts_half(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
		;

	index++;
	for (index /= 2; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
