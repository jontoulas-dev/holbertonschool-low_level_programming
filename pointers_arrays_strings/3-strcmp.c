#include "main.h"
#include <stdio.h>

/**
 * _strcmp - push two string
 * @s1: first list
 * @s2: second list
 *
 * Return: s1 s2 dif
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s1[i] == s2[i])
{
i++;
}
return (s1[i] - s2[i]);
}
