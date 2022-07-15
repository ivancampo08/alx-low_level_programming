#include "main.h"

/**
* reverse_array - reverses the content of an array
* @a: array.
* @n: number os elementsof the array.
* Return: no return.
*/

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n - 1; i++)
	{
	for (j = i + ; j > 0; j--)
	{
	tmp = *(a + j);
	*(a + j) = *(a + (j - 1));
	*(a + (j - 1)) = tmp;
	}
	}
}
