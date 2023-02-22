#include "main.h"

/**
  * main - entry point
  * Description:print a string
  * Return: 0 (success)
  */

int main(void)
{
	int i = 0;
	char *str = "_putchar\n";

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	return (0);
}
