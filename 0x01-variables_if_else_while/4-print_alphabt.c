#include <stdio.h>
/**
 * main - Prints alphabet in lowercase without q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 97;

	while (n <= 123)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	return (0);
}
