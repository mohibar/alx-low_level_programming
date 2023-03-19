#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints all possible combinations of single-digit numbers.
  *Return: 0 Always
  */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(48 + n);
		if (n == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
		return (0);
}
