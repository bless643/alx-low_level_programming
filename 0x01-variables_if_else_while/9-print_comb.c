#include <stdio.h>
/**
 * main - Entry point  single digit numbers
 * Description -prints all possible combinations of single-digit numbers.
 * Return :0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			puthcar('');
		}
	}
	putchar('\n');
	return (0);
}
