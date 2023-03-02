#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	char str[10] = "_putchar";

	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar('\n');
	return (0);
}
