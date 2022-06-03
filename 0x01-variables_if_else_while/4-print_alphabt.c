#include <stdio.h>

/**
 * main - print the alphabet in lowercase, followed by a new line
 * Only use the putchar 2 times
 * Return: 0
 */

int main(void)
{
int lwc = 'a';
while (lwc <= 'z')
{
if (lwc == 'e' || lwc == 'q')
{
lwc += 1;
}
else
{
putchar(lwc);
lwc += 1;
}
}
putchar('\n');
return (0);
}
