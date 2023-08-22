#include "main.h"

/**
  * _isdigit - Checks For a Digit
  * @c: Is The Digit To Be Checked
  *
  * Return: 1 If c is a Digit
  */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
