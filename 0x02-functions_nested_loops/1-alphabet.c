#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_alphabet - Entry point
 * Description: Print alphabet in lowercase
 * Return: Point of No return
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n')
}
