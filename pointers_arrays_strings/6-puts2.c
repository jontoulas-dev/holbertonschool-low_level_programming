#include "main.h"

/**
 * puts2 - print a string
 * @str: point the caracter
 *
 */
void puts2(char *str)
{
int i;

i = 0;

while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
