#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints all the numbers of base 16 in lowercase
  *Return: 0 Always
  */

int main(void)
{
	int n = 0;
	int c = 'a';

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
