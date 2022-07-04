#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: New struct dog, NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *prev_dog;
	int i, prev_name, prev_owner;

	prev_dog = malloc(sizeof(*prev_dog));
	if (prev_dog == NULL || !(name) || !(owner))
	{
		free(prev_dog);
		return (NULL);
	}

	for (prev_name = 0; name[prev_name]; prev_name++)
		;

	for (prev_owner = 0; owner[prev_owner]; prev_owner++)
		;

	prev_dog->name = malloc(prev_name + 1);
	prev_dog->owner = malloc(prev_owner + 1);

	if (!(prev_dog->name) || !(prev_dog->owner))
	{
		free(prev_dog->owner);
		free(prev_dog->name);
		free(prev_dog);
		return (NULL);
	}

	for (i = 0; i < prev_name; i++)
		prev_dog->name[i] = name[i];
	prev_dog->name[i] = '\0';

	prev_dog->age = age;

	for (i = 0; i < prev_owner; i++)
		prev_dog->owner[i] = owner[i];
	prev_dog->owner[i] = '\0';

	return (prev_dog);
}
