#include <stdio.h>
#include <unistd.h>
/**
 * Main -  Entry Point
 * Description: prints all single digit number
 * of base 10 starting from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
