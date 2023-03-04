#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - Entry poinnt
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer 'src'
 * to the buffer pointed to by 'dest'
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

	return (dest);
}
