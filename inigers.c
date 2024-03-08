#include "main.h"

/**
* printnumber - prints a number input
* @i: the number to be entered.
*
* Return: the length of the integer in char form.
*/
int printnumber(int i)
{
	int val = i, temp = 0, j = 0, k, val2 = 0, zero = 0;

	if (val < 0)
	{
		_putchar('-');
		val *= -1;
	}
	while (val >= 10)
	{
		temp = val % 10;
		val = (int)val / 10;
		if (j == 0 && temp == 0)
		{
			zero = 1;
			continue;
		}
		j++;
		val2 = (val2 * 10) + temp;
		if (val < 10)
		{
			val2 = (val2 * 10) + val;
			break;
		}
 
	}
	k = j;
	_putchar((val2 % 10) + '0');
	while (k >= 0)
	{
		val2 = (int)val2 / 10;
		if (val2 < 10)
		{
			_putchar(val2 + '0');
			k--;
			if (zero == 1)
			{
				_putchar('0');
				j++;
			}
			break;
		}
		temp = val2 % 10;
		_putchar(temp + '0');
		k--;
	}
	if (i < 0)
		j++;
	return (j + 1);
}
