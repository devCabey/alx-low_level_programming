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
	printf("Name: %s\nAge: %f\nOwner: %s\n", 
			(*d).name == NULL ? "(nil)" : (*d).name,
			(*d).age,
			(*d).owner == NULL ? "(nil)" : (*d).owner
			);
}
