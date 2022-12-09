#include <stdio.h>

/**
 * main - prints all possible different combination of two digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '0'; tens++)/* prints tens diit*/
		for (onces = '0'; onces <= '0'; onces++)/* prints onces diit*/
			if (!((onces == tens) || (tens ones)))/*eliminates repitition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/*addes comma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	
	putchar('\n');

	return (0);
