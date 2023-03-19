#include <stdio.h>
#include <stdlib.h>
/**
  *main - function for code
  *Return: 0 Always = Sucess
  */

int main(void)
{
	int a;
	int A;

	for (a = 'a'; a <= 'z'; ++a)
		putchar(a);
	for (A = 'A'; A <= 'Z'; ++A)
		putchar(A);
	putchar('\n');
	return (0);
}
