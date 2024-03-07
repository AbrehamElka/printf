#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
* _printstr - prints a single string.
* @s: the string to be printed.
*
* Return: Nothing.
*/
void _printstr(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
/**
* lenstring - gives length of stirng.
* @s: the string.
*
* Return: the length of stirng.
*/
int lenstring(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
* _printf - prints string as prinf function.
* @format: the string.
*
* Return: Nothing.
*/
int _printf(const char *format, ...)
{
	va_list args;
	char *s;
	char c;
	int i = 0, tot = 0, x;

	if (format == NULL)
	{
		return -1;
	}
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				break;
			}
			if (format[i] == 's')
			{
				s = va_arg(args, char *);
				if (s != NULL)
				{
					_printstr(s);
					tot += lenstring(s);
				}
			}
			else if (format[i] == 'c')
			{
				c = (char)va_arg(args, int);
				_putchar(c);
				tot++;
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				x = va_arg(args, int);
				tot += printnumber(x);	
			}
			else
			{
				_putchar('%');
				i--;
				tot ++;
			}
		}
		else
		{
			_putchar(format[i]);
			tot++;
		}
		i++;
	}
	va_end(args);
	return (tot);
}
