#include "main.h"
#include <stdio.h>
/**
 * _strlen - Entry Point
 * Description: find the length of a string
 * @s: Pointer to the string check
 * Return: Point of No return (void)
 */
int _strlen(char *s)
{
int count = 0;
while (s[count])
	count++;

return (count);
}
