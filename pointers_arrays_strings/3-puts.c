#include "main.h"

/**
 * _puts - print a string
 * @str: point the caracter
 *
 */
void _puts(char *str)
{
int i;

i = 0;

while (str[i] != '\0')
{
i++;
_putchar(str[i]);
}
_putchar('\n');
}
