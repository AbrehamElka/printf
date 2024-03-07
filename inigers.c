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
	char *str1;
	if (i == NULL)
	{
		return (0);
	}
	if (val < 0)
	{
		_putchar('-');
		val *= -1;
	}
	while (val > 10)
	{
		temp = val % 10;
		str1[j] = (char)temp;
		val = val - temp;
		val = (int)(val / 10);
		if (val < 10)
		{
			j++;
			str1[j] = (char)val;
			break;
		}
		j++;
	}
	k = lenstring(str1);
	j = k;
	k--;
	while (k >= 0)
	{
		_putchar(str[k]);
		k--;
	}
	return (j);
}
