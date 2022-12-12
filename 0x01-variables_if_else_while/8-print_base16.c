#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	char a;

	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
