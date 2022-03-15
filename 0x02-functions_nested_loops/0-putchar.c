#include "main.h"

/**
 * main - prints "_putchar"
 *
 * Description: _putchar prototype
 * Return: - if the programming ran to completion
 */

int main(void)
{
char char_str[9] = "_putchar";
int i;

for (i = 0; i <= 8; i++)
{
	_putchar(char_str[i]);
}
	_putchar('\n');

	return (0);
}
