#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _abs- Entry Point
 * Description: Computer the absolute value of an integer
 * @n: An integer to test
 * Return: A point of NO return
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n);
	}
}
