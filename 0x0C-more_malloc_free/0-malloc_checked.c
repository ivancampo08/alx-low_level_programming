#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - checking malloc
* @b: param b
*
* Return: pointer to the allocated memory
* ifmalloc fails, status value is equal to 98
*/
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

