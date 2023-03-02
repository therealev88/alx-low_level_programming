#include "main.h"
#include <stdio.h>
#include "6-abs.c"
/**
 * print_last_digit- Entry Point
 * Description: Prints the last digit of a number
 * @n: To be tested as an integer
 * Return: Point of No return
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
