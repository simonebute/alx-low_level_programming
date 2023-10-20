#include "main.h"

/**
* _strncpy - copies the string from src to dest
* @dest: destination input value
* @src: source input value
* @n: maximum number of bytes to be copied from src
* Return: a pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)

{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
			j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
