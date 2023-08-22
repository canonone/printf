#include "main.h"

/**
 * print_char - sends a character to the std output.
 * @c: holds a character.
 * Return: returns the length of the character.
 */

int print_char(char c)
{
	int num = 1;

	write(1, &c, 1);
	return (num);

}
