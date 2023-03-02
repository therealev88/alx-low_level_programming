#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _islower - Entry Point
 * Description: Check if C is lower or uppercase
 * @c: Character is used as an integer
 * Return: Point of No return
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
