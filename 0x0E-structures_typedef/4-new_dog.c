#include "dog.h"

/**
  * new_dog -  A function that creates a new dog
  * @name : dog's name
  * @age : dog's age
  * @owner : dog's owner
  * Return : dog_t* struct
 */

dog_t	*new_dog(char *name, float age, char *owner)
{
	dog_t	*new_dog;

	new_dog->age = age;
	new_dog->name = name;
	new_dog->owner = owner;
	return (new_dog);
}
