#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints a struct d
 *
 * @d: A struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name)
	{
		printf("Name: %s\n", (*d).name);
	}
	else
	{
		printf("nil\n");
	}
	printf("Age: %f\n", (*d).age);
	if ((*d).owner)
	{
		printf("Owner: %s\n", (*d).owner);
	}
	else
	{
		printf("nil\n");
	}
}
