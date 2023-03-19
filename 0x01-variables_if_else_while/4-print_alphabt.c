#include <stdio.h>
#include <stdlib.h>
/**
  *main - function for code
  *Return: 0 Always = Sucess
  */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; ++a)
	{
		if (a != 'e' && a != 'q')
		putchar(a);
	}
	putchar('\n');
	return (0);
}
