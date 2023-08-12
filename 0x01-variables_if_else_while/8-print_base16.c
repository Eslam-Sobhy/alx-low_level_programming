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
for (a = 48; a <= 102; a++)
{
	putchar(a);
	if (a == 57)
		a += 39;
}
putchar('\n');
return (0);
}
