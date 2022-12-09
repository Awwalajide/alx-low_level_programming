#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets both lower and upper cases
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	char CH;

	ch = 'a';
	CH = 'A';
	while
		(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while
		(CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);
}
