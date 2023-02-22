#include "main.h"

/**
 * main - entry point
 * print a string
 * return 0 (success)
 * */

int main(void)
{
	int i;
	char *str = "_putchar";
	i = 0;

	while (str[i])
	{
		putchar(1, str[i], 1);
		i++;
	}
	return (0);

}
