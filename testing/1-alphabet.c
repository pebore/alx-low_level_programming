#include "main.h"

/**
 * main-contains the work
 *
 * always return 0 which means success
 */

void print_alphabet(void)
{
	char alpha;
	for (alpha ='a';alpha<='z';alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
