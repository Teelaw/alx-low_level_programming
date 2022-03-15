#include "main.h"

/**
 * main - prints "Main"
 *
 * Description: _putchar prototype
 * Return: - if the programming ran to completion
 */

int main(void)
{
	char char_str[9] = "Main";
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(char_str[i]);
	}
		_putchar('\n');

		return (0);
}
