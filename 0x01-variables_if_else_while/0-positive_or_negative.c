# include <stdio.h>
# include <time.h>
/**
 *main-Entry point if the number is postive ,zero or negative
 *Description:program prints showing if number is postive ,zero or negative
 *Return:0
 */
int main(void)
{
	int(n);

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%i is zero\n)", n);
	}
	else if (n < 0)
	{
	printf("%i is negative\n", n);
	}
	return (0);
}
