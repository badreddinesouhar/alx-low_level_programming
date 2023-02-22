#include "main.h"

/**
*print_alphabet - prints alphabet
*Return: void.
*/

void print_alphabet(void)
{
	int i = 0;
	char *str = "abcdefghijklmnopqrstuvwxyz";

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
