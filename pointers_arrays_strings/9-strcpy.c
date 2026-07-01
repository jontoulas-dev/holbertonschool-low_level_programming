#include "main.h"
#include <stdio.h>

/**
 * _strcpy - computes the length of a string
 * @dest: calue copied
 * @src: value copy
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}
