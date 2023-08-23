#include "main.h"

/**
* str_len - calulate the length of a string.
* @strn: a pointer to a string.
* Return: returns a calculated string length.
*/

int str_len(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
* display - print char to std out.
* @strn: a pointer to string.
* Return: returns the string length
*/

int display(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);

	return (i);


}
