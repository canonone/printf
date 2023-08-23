#include "main.h"

/**
* _putchar - writes character to std output.
* @c: character.
* Return: on success 1.
*/

int _putchar(char c)
{
	return (buffer(c));

}

/**
* buffer - to save character in a buffer.
* @c: character.
* Return: value 1.
*/

int buffer(char c)
{
	static char buffers[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, buffers, i);
		i = 0;
	}

	if (c != -1)
		buffers[i++] = c;

	return (1);

}
