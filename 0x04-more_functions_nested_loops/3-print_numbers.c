#include "main.h"

/**
  * print_numbers - print from 0 - 9
  *
  * Return: Nothig.
  */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
