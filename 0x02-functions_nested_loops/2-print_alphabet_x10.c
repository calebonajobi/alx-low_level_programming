#include "main.h"
/**
 * print_alphabeth_x10 - print the alphabeth 10 times.
 *
 * Return: Always 0 (success)
 */
void print_alphabeth_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
