#include "main.h"
/**
 * positive_or_negative - is fumction that  print the exact output
 *@i: number to be checked.
 *
 * Return: always 0.
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is nagtive\n", i);
	else
		printf("%d is zero\n", i);
}
