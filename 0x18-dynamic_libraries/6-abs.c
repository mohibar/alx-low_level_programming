#include "main.h"

/**
  * _abs - compute the value of a num
  * @p: Is the num
  *
  * Return: 1
  */
int _abs(int p)
{
	if (p > 0)
	{
		return (p);
	}
	else if (p == 0)
	{
		return (0);
	}
	else
	{
		return ((-1) * p);
	}
}
