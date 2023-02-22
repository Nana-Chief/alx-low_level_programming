#include "main.h"
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'print alphabeths'
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
