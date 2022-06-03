#include <stdio.h>
#include <ctype.h>

/**
 * main - print the alphabet in lowercase, followed by a new line
 * You can only use the putchar 2 times
 * Return: 0
 */

int main(void)
{
int lw = 'a';
while (lw <= 'z')
{
putchar(lw);
lw += 1;
}
putchar('\n');
return (0);
}
