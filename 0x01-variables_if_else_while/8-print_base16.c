#include <stdio.h>
/**
 *main - entry point
 *
 *Description:prints numbers of base 16 in lowercase
 *
 *Return: Always zero
 */
int main(void)
{
	int digit, letter, c;

	for (digit = 48, c = 0; c < 10; digit++, c++)
	{
		putchar(digit);
	}
	for (letter = 97, c = 1; c < 7; letter++, c++)
	{
		putchar(letter);
	}
	putchar(10);
	return (0);
}
