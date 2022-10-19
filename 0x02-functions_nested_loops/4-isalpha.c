#include "main"
/**
 * _isalpha - check for alphabets
 * @c: characters to be checked
 *
 * Return: 1 if character is letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z''))
		return (1);
	else
		return (0);
}
