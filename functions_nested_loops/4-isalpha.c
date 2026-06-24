#include "main.h"

/**
* _isalpha - Verifie si un caractère est en minuscule ou majuscule.
* @c: ce qui faut tester.
* Return: void.
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
