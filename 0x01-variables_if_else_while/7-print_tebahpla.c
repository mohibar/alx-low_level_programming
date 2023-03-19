#include <stdio.h>
#include <stdlib.h>
/**
  *main - function for code
  *Return: 0 Always = Sucess
  */

int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; --a)
		putchar(a);
	putchar('\n');
	return (0);
}
