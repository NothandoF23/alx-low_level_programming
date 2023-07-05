#include "main.h"
/**
 * revString - function that prints a string in reverse
 * @s: string input argument
 * Return: nothing
 */

int check(char *s)
{
	int leftIndex, rightIndex, length = 0;

        while (*s != '\0')
        {
		length++;
                s++;
        }

	if (length < 1)
	{
		return (1);
	}

	leftIndex = 0;
	rightIndex = length - 1;

	if(NULL == s || leftIndex < 0 || rightIndex < 0)
	{
         return 0;
	}
      
	if(leftIndex >= rightIndex)
         	return 1;
     	if(s[leftIndex] == s[rightIndex])
     	{

         return check(s, leftIndex + 1, rightIndex - 1);
     	}
      
     	return 0;
}



/**
 * is_palindrome - check if string is palindrome
 * @s: string input argument
 * Return: 0 if s is not palindrome, 1 otherwise
 */
int is_palindrome(char *s)
{
	return check(s);
}
