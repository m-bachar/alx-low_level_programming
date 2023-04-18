#include "dog.h"

/**
  * init_dog - A function that initialize a variable of type struct dog
  * @d : struct name
  * @name : dog's name (char *)
  * @age : dog's age (float)
  * @owner : dog's owner (char *)
 */

void	init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
