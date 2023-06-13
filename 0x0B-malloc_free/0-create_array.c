#include "main.h"
#include <stdlib.h>
/**
 * creat_array - creat array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *creat_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeod(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (1 = 0; i < size; i++)
		str[i] = c;
	return (str);
}
