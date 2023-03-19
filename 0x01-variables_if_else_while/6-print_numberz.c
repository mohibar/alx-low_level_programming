#include <stdio.h>
#include <stdlib.h>
/**
  *main - where all code
  *Return: 0 Always = Sucess
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(48 + x);
		x++;
	}
	putchar('\n');
	return (0);
}
