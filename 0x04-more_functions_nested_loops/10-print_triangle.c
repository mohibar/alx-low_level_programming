#include "main.h"

/**
  * print_triangle - prints a triangle
  * @size: The size of the triangle
  *
  * Return: Nothing
  */
void print_triangle(int size)
{
	int r, l;

	if (size > 0)
	{
		l = 1;
		while (l <= size)
		{
			r = 0;
			while (r < size - l)
			{
				_putchar(' ');
				r++;
			}
			r = 0;
			while (r < l)
			{
				_putchar('#');
				r++;
			}
			_putchar('\n');
			l++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
