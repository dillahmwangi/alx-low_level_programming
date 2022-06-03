#include <stdio.h>
#include <ctype.h>

/**
* main - print alphabet in lowercase
* Use putchar onlu 2times
* Return: 0
*/

int main(void)
{
int lower = 'a';
while (lower <= 'z')
{
putchar(lower);
lower +=1;
}
putchar('\n');
return (0);
}
