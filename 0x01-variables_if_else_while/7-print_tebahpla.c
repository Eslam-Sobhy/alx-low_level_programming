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
char ch = 'z';
while (ch >= 'a')
{
	putchar(ch);
	ch--;
}
putchar('\n');
return (0);
}
