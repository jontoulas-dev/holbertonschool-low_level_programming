#include "main.h"

/**
 * print_line - Print 0 to 14 ten times
 * @n: le nombre de fois à afficher
 *
 */
void print_line(int n)
{
int i;

if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
