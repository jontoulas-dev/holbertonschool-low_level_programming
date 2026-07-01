#include <stdio.h>

/**
 * main - Entry point for the simple calculator program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice = 1;
	int a;
	int b;

	printf("Simple Calculator\n");
	while (choice != 0)
	{
		printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
		printf("Choice: ");
		scanf("%d", &choice);

		if (choice > 4 || choice < 0)
        {
            printf("Invalid choice\n");
        }
		if (choice == 1)
        {
            printf("A: ");
            scanf("%d", &a);
            printf("B: ");
            scanf("%d", &b);
            printf("Result: %d\n", a + b);
        }
		if (choice == 0)
		{
			printf("Bye!\n");
		}
	}
	return (0);
}
