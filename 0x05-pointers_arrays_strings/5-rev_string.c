#include "main.h"
#include <stdio.h>
/**
 * rev_string - Entry Point
 * Description: reverses a string
 * @s: string to reverse
 * Return: Point of no return (void)
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char str[500];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
