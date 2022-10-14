# include <stdio>
/**
 * main - Entry point
 * Decripton - A program that prints alphabeth in lowercase execpt q and e
 * return:0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
	}
	}
	putchar('\n');
	return (0);

}
