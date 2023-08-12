#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C Program to knoe type of number
 *
 * Return: Always 0 (success)
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%i is Posistive\n", n);
else if (n < 0)
	printf("%i is Negative\n", n);
else
	printf("%i is Zero\n", n);
return (0);
}
