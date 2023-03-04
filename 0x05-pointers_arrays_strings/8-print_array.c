#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * Description: print 'n' elements of an array of integers
 * Numbers must be seperated by comma and space.
 * You can only use _putchar to print.
 * @a: int type array pointer
 * @n: int type integer
 * Return: Point of No return (void)
 */
void print_array(int *a, int n)
{
	int index;

	index = 0;
	for (n--; n >= 0; n--, index++)
	{
		printf("%d", a[index]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");

}
