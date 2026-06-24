#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Afficher les derniers chiffres
 * @n: Le chiffre à check
 * Return: Last digit
 */
int print_last_digit(int n)
{
int last_digit;

if (n >= 0)
{
last_digit = n % 10;
}
else
{
last_digit = -(n % 10);
}
_putchar(last_digit + '0');

return (last_digit);
}
