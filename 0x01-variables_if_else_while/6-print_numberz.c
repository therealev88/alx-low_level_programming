#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry Point
 * Description: Print single digits
 * of base 10 from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
