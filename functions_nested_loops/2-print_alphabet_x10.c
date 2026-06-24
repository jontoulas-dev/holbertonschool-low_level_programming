#include "main.h"

/**
* print_alphabet_x10 - Prints the alphabet 10 times, followed by a new line.
*
* Return: void.
*/
void print_alphabet_x10(void)
{
char lettre;
int tour;

tour = 0;
while (tour < 10)
{
lettre = 'a';

while (lettre <= 'z')
{
_putchar(lettre);
lettre++;
}
_putchar('\n');
tour++;
}

}
