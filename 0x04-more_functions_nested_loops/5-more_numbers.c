#include "main.h"

/**
  * more_numbers - Prints The Numbers x10
  *
  * Return: Nothing.
  */

void more_numbers(void)
{
	int i = 0;
	int n = 0;

	while (i < 10)
	{
		n = 0;
		while (n < 15)
		{
			if (n > 9)
			{
				_putchar('1');
			}
			_putchar((n % 10) + 48);
			n++;
		}
		_putchar('\n');
		i++;
	}
}
