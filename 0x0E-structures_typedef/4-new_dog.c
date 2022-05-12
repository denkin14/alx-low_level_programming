#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - will create a new dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, ame, wner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (ame = 0; name[ame]; ame++)
		;

	for (wner = 0; owner[wner]; wner++)
		;

	p_dog->name = malloc(ame + 1);
	p_dog->owner = malloc(wner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < ame; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;

	for (i = 0; i < wner; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}
