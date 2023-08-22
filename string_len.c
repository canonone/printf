#include "main.h"

/**
* str_len - calulate the length of a string.
* @strn: a pointer to a string.
* Return: returns a calculated string length.
*/

int str_len(const char *strn)
{
	int length = 0;

	while (strn[length] != '\0')
	{
		length++;
	}
	return (length);
}
