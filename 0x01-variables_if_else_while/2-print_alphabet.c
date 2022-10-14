#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *Description: A program that print the alphabet
 *Return :0
 */

int main(void)

{
char c;
for (c = 'a' ; c <= 'z' ; c++)
	putchar(c);
putchar('\n');
return (0);
}
