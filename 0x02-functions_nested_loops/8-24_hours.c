#include "main.h"

/**
  * jack_bauer - Prints every minute of the day of Jack Bauer
  *
  * Return: ...
  */
void jack_bauer(void)
{
	int u, x, y, z;

	for (u = 0; u <= 2; u++)
	{
		for (x = 0; x <= 9; x++)
		{
			if ((u <= 1 && x <= 9) || (u <= 2 && x <= 3))
			{
				for (y = 0; y <= 5; y++)
				{
					for (z = 0; z <= 9; z++)
					{
						_putchar(u + '0');
						_putchar(x + '0');
						_putchar(58);
						_putchar(y + '0');
						_putchar(z + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
