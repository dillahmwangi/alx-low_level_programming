#include <stdio.h>

/**

* main - print in lower case
* Use putchar only 2 times
* Return: 0
*/

int main(void)
{
int lwc = 'a';
while (lwc <= 'z')
{
if (lwc =='e' || lwc == 'q')
{
lwc +=1;
}
else
{
putchar(lwc);
