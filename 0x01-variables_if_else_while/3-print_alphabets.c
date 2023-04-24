#include <stdio.h>
/**
 * main - Prints alphabet in lowercase, and then in uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int m;

	n = 'a';
	m = 'A';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (m = 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
