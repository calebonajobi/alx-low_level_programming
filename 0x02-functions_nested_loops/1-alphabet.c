#include "main.h" 
/**
 * print_alphabet - prints the alphabeth in lowercase.
 *
 * Return: Always 0 (success)
 */
void print_alphabeth(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar ('\n');
}
