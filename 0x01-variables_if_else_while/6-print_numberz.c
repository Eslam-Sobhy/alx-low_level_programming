#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C progrsm prints form 0 to 9
 *
 * Return: Always 0 (success)
*/

int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
	putchar(a + '0');
}
printf('\n');
return (0);
}
