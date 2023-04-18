#include <stdlib.h>
#include "dog.h"


/**
 * new_dog - a function that creates a new dog
 *
 * @name: dog'name
 * @age : dog's age
 * Return: struct pointer dog
 *		NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog->name = _sytcpopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return(dog);
}
