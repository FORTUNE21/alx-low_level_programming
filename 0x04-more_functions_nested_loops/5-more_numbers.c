#include "main.h"

/**
 * more_numbers - The function that prints 10 times the numbers
 * 0 - 14 followed by a new file
 *
 * Return: 0 for success
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for  (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
