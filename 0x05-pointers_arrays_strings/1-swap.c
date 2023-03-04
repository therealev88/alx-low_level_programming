#include "main.h"
#include <stdio.h>
/**
 * swap_int - Entry point
 * Description: Swap variable values
 * @a: Pointer 1
 * @b: Pointer 2
 * Return: Point of no return (void)
 */
void swap_int(int *a, int *b)
{
*a += *b;
*b = *a - *b;
*a = *a - *b;
}
