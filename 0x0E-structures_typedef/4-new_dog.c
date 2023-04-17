#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 *
 * @name: A string
 *
 * @age: A float
 *
 * @owner: A string
 *
 * Return: A pointer to a struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_t;
	
	new_t = malloc(sizeof(dog_t));
	if (new_t == NULL)
		return (NULL);
	(*new_t).name = name;
	(*new_t).age = age;
	(*new_t).owner = owner;

	return (new_t);
}
