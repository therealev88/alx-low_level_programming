#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_sign- Entry point
 * Description: Print the sign of a number
 * @n: An integer to test
 * Return: Point of No return
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('_');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
