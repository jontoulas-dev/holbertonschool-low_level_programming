#include "main.h"
#include <stdio.h>

/**
 * _isupper - Renvoie c si majuscule
 * @c: variable à verifier
 *
 * Return: Value of c
 */
int _isupper(int c)
{

if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
