#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string input argument
 * Return: length of string
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		s++;
		return (_strlen(s) + 1);
	}
}


/**
 * checkPalindrome - function checks if string is a palindrome
 * @s: string input argument
 * @index: beginning of string
 * Return: 1 if s is palindrome, 0 otherwise
 */

int checkPalindrome(char *s, int index)
{
	int len = _strlen(s) - (index + 1);

	if (s[index] != s[len])
	{
		return (0);
	}

	if (index + 1 == len || index == len)
	{
		return (1);
	}
	return (checkPalindrome(s, index + 1));

}


/**
 * is_palindrome - check if string is palindrome
 * @s: string input argument
 * Return: 0 if s is not palindrome, 1 otherwise
 */
int is_palindrome(char *s)
{
	return (checkPalindrome(s, 0));
}
