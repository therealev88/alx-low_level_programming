#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _isalpha- Entry Point
 * Description: Check for Alphabetic Character
 * @c: Using char as an integer
 * Return: Point of no return
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
