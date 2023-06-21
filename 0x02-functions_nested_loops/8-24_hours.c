#include "main.h"

/**
 * jack_bauer - func that prints every minute of the day of Jack Bauer, starti
 * n from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 * and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;
	int hrsRm;
	int minsRm;

	while (hrs <= 23)
	{
		while (mins <= 59)
		{
			minsRm = mins % 10;
			hrsRm = hrs % 10;
			_putchar(hrs / 10 + '0');
			_putchar(hrsRm + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(minsRm + '0');
			mins++;
			_putchar('\n');
		}
		hrs++;
		mins = 0;
	}
}

