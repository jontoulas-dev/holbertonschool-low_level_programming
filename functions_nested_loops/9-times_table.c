#include "main.h"
#include <stdio.h>

/**
 * times_table - Print table of 9
 *
 *
 */
void times_table(void)
{
int l;
int c;
int produit;

for (l = 0; l < 10; l++)
{
for (c = 0; c < 10; c++)
{
produit = l * c;

if (c > 0)
{
_putchar(',');

if (produit < 10)
{
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(' ');
}
}
if (produit < 10)
{
_putchar(produit + '0');
}
else
{
_putchar((produit / 10) + '0');
_putchar((produit % 10) + '0');
}
}
_putchar('\n');
}
}
