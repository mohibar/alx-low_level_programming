#include "main.h"
/**
  * _isupper - checks for uppercase character.
  * @c: The Character to be checked
  *
  * Return: 1 If c is Upper else return 0
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
