#include "dog.h"
#include <stlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int x, Dname, Downer;

	ptr = (dog_t *)malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	Dname = Downer = 0;
	while (name[Dname++])
		;
	while (owner[Downer++])
		;
	ptr->name = malloc(Dname * sizeof(ptr->name));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (x = 0; x <= Dname; x++)
		ptr->name[x] = name[x];
	ptr->age = age;
	ptr->owner = malloc(Downer * sizeof(ptr->owner));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (x = 0; x <= Downer; x++)
		ptr->owner[x] = owner[x];
	return (ptr);
}
