#include "main.h"
#include <stdio.h>
/**
 * rev_string - This fuction print a string reverser
 * @s: this is the pointer that point to a string
 */
void rev_string(char *s)
{
	int a, len;

	char *begin, *end = s;

	for (a = 0; s[a] != '\0' && s[a + 1] != '\0'; a++)
	{
		end++;
	}
	len = a + 1;
	begin = s;
	for (a = 0; a < len / 2; a++)
	{
		char x;

		x = *end;
		*end = *begin;
		*begin = x;
		begin++;
		end--;
	}

	end[len + 1] = '\0';
}
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns lenght;
 */
int _strlen(char *s)
{
	int count, inc;

	inc = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		inc++;
	}

	return (inc);
}

/**
 * swap_char - swap two characters
 * @a: first character
 * @b: second character
 * Return: nothing
 */

void swap_char(char *a, char *b)
{
	char tmp = *a;

	*a = *b;
	*b = tmp
}
