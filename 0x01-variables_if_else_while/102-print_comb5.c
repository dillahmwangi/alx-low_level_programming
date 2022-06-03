#include <stdio.h>
/**
 *main - entry point
 *use putchar 8 times max
 *Return:0 - success
 *
 */
int main(void)
{
	int ab, cd;

	for (ab = 0; ab < 100; ab++)
	{
		for (cd = 1; cd < 100; cd++)
		{
			if (ab < cd)
			{
				putchar((ab / 10) + '0');
				putchar((ab % 10) + '0');
				putchar(' ');
				putchar((cd / 10) + '0');
				putchar((cd % 10) + '0');
				if (!(ab == 98 && cd == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
