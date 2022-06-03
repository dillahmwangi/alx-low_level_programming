#include <stdio.h>
/**
 *main - entry point
 *
 *Description: prints all possible combinations of single digit number
 *Use putchar max 4 times 
 *Return: Always 0
 */
int main(void)
{
	int digit, i;

	for (digit = 48, i = 0; i < 10; digit++, i++)
	{
		putchar(digit);
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
		putchar(10);
		return (0);

}
