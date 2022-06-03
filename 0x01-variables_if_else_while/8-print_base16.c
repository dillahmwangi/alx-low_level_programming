#include <stdio.h>
/**
 *main - entry point
 *
 *Description:prints numbers of base16 in lowercase
 *Only use putchar 3 times
 *Return: Always zero
 */
int main(void)
{
	int digit, letter, b;

	for (digit = 48, b = 0; b < 10; digit++, b++)
	{
		putchar(digit);
	}
	for (letter = 97, b = 1; b < 7; letter++, b++)
	{
		putchar(letter);
	}
	putchar(10);
	return (0);
}
