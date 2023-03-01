#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Printing uppercase and lowercase letters
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
		
	}
	putchar('\n');
		return (0);
}
