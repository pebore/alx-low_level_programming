#include "main.h"
/**
 *
 * starting to see how this works
 *
 * return 0 always
 **/
void print_alphabet_x10(void)
{
	char alpha, co;
co=0;
	while(co<10)
	{
		for(alpha='a';alpha<='z';alpha++)
		{
			_putchar('alpha');
		}
		co++;
		_putchar('\n');
	}
}
