#include "main.h"
/**
 *
 * main-check digits
 *
 *return always 0
 **/

int _isdigit(int c)
{
	char c;

	if ((c >= 0) && (c <= 9))
		
		return (1);
	else
		return(0);
}
