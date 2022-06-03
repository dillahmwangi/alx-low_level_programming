<<<<<<< HEAD
#include<stdio.h>
=======
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point, assign random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}
>>>>>>> 11673508f25d73a79be222f4c5692273b0d6d39c
