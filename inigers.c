#include "main.h"
#include <stddef.h>
/**
* printnumber - prints a number input
* @i: the number to be entered.
*
* Return: the length of the integer in char form.
*/
int printnumber(int i)
{
	int val = i, temp = 0, j = 0, k;
	char c;

	if (val < 0)
	{
		_putchar('-');
		val *= -1;
	}
	while (val > 10)
	{
		temp = val % 10;
		val = val - temp;
		val = (int)(val / 10);
		if (val < 10)
		{
			break;
		}
		j++;
	}
	val = i;
	k = j;
	while (j >= 0)
	{
		temp = (int)val / (10 ^ j);
		if (temp < 10)
		{
			c = (char)temp;
			_putchar(c);
			j--;
			continue;
		}
		temp = temp % 10;
		c = (char)temp;
		_putchar(c);
		j--;
	}
	return (k);
}
