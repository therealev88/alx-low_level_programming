#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_alphabet_x10 - Entry Point
 * Description: Print alphabet 10 times
 * Return: Point of No return
 */
void print_alphabet_x10(void)
{
	char letter;
	int count = 0;

	while (count <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		count++;
	}
}
