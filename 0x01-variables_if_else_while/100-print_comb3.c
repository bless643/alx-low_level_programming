# include <studio.h>
/**
 * main - Entry point digit numbers
 * Description prints all possible different combinations of two digits
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
			putchar(' ');
		}
	}
putchar('\n');
return (0);
}

