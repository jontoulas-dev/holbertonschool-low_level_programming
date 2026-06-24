#include "main.h"

/**
 * main - Print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char lettre = 'a';

while (lettre <= 'z')
{
_putchar(lettre);
lettre++;
}

_putchar('\n');
}
