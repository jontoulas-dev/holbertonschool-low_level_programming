#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Renvoie c si majuscule
 * @c: variable à verifier
 *
 * Return: Value of c
 */
int _isdigit(int c)
{

if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
