#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string input
 * @s2: string input
 * Return: string pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *s;

	if (s1 == NULL || s2 == NULL)

