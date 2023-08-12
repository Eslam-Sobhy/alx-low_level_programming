#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program print alphabrt lowercase
 *
 * Return: 0 (succcess)
*/

int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
	putchar(ch);
	ch++;
}
putchar('\n');
return (0);
}
