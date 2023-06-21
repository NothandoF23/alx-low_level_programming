#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: the number passed as parameter
 * Return: lastdgt
 */

int print_last_digit(int num)
{
	int lastdgt;

	lastdgt = num % 10;

	return (lastdgt);
}
