#include <stdio.h>
/**
 * main - print alpha in lower case
 * return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
