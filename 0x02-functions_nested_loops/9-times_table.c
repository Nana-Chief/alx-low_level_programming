#include "main.h"

/**
  * times_table - Prints the 9 times table, starting with 0
  *
  * Return: empty output
  */
void times_table(void)
{
	int i, k, l, m, d;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			l = i * k;

			if (l > 9)
			{
				m = l % 10;
				d = (l - m) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(m + '0');
			}
			else
			{
				if (k != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(l + '0');
			}
		}

		_putchar('\n');
	}
}
