#include <stdio.h>

/**
 * main - print in lower and then upper,
 * You can only use the putchar 3times
 * Return: 0
 */

int main(void)
{
int lower = 'a';
int upper = 'A';
while (lower <= 'z')
{
putchar(lower);
lower += 1;
}
while (upper <= 'Z')
{
putchar(upper);
upper += 1;
}
putchar('\n');
return (0);
}
