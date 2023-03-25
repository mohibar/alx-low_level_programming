#include "main.h"

/**
  * print_most_numbers - prints From 0 - 9 Exept 4 - 2
  *
  * Return: Nothing
  */

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + 48);
	}
	_putchar('\n');
}
