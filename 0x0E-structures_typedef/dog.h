/**
 * struct dog - Short description
 *
 * @name: A string
 *
 * @age: A float
 *
 * @owner: A string
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog;

typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
