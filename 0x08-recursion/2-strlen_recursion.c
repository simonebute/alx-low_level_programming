#include "main.h"

/**
* _strlen_recursion - returns the lenght of a string
* @s: the string to be measured
* Return: the lenght of the string
*/

int _strlen_recursion(char *s)

{
	int longint = 0;

	if (*s)
	{
		longint++;
		longint += _strlen_recursion(s + 1);
	}
	return (longint);

}

