#include "0-putchar.h"
/**
 * main - Entry point
 * Description: prints '0-putchar \n'
 * Return: Always 0 (success)
 */
int main(void)
{
char str[] = "0-putchar\n";
int i = 0;

while (str[i] != '\0')
	{
	char c = str[i];

	_putchar(c);
	i++;
	}
return (0);
}
