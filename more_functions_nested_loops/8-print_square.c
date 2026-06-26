#include "main.h"

/**
 * print_square - Print square
 * @size: le nombre de fois à afficher
 *
 */
void print_square(int size)
{
int ligne, colonne;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (ligne = 0; ligne < size; ligne++)
{
for (colonne = 0; colonne < size; colonne++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
