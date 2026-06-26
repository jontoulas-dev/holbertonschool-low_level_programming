#include "main.h"

/**
 * more_numbers - Print 0 to 14 ten times
 *
 *
 */
void more_numbers(void)
{
int ligne;
int number;


for (ligne = 0; ligne < 10; ligne++)
{

for (number = 0; number <= 14; number++)
{

if (number > 9)
{
_putchar((number / 10) + '0');
}
_putchar((number % 10) + '0');
}
_putchar('\n');
}
}
