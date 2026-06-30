#include "main.h"

/**
 * puts_half - print a string
 * @str: point the caracter
 *
 */
void puts_half(char *str)
{
int longueur = 0;
int i;

while (str[longueur] != '\0')
{
longueur++;
}

if (longueur % 2 == 0)
{
i = longueur / 2;
}
else
{
i = (longueur + 1) / 2;
}
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
