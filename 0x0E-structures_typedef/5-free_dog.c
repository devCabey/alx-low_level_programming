#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs
 *
 * @d: A pointer
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
