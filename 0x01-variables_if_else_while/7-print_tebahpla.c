#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - main block
* Description: print lower case alphabets in reverse
* Return: 0
*/
int main(void)
{
char a = 'z';

while (a >= 'a')
{
putchar(a);
a--;
}

putchar('\n');
return (0);
}
