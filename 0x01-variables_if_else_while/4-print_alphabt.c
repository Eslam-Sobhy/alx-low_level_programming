#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program prints the alphabets lower , upper
 *
 * Return: Always 0 (success)
*/

int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
	if (ch == 'e' || ch == 'q')
	{
		ch++;
	}
	putchar(ch);
	ch++;
}
putchar('\n');
return (0);
}
