#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print a-z
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
