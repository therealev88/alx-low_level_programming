#include "main.h"
#include <stdio.h>
/**
 * _puts - Entry Point
 * Description: Prints a str, followed by a new line
 * @str: pointer to the string
 * Return: Point of no return (void)
 */
void _puts(char *str)
{
int index = 0;
while (str[index])
{
	_putchar(str[index]);
	index++;
}
_putchar('\n');
}
