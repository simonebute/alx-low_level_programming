#include "main.h"

/**
 *_isupper - cecks for upper case character
 *  @c: function parameters
 *  Return: 1 on success 0 on failure
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
