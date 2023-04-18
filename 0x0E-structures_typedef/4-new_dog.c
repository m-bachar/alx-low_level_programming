#include "dog.h"

/**
  * ft_strlen - A function that calculates a string length
  * @str : string 
  * Return : Returns string length 
 */
static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
  * ft_strcpy : A function that copies src to dest 
  * @dest : destination 
  * @src : sourcc 
  * Return : Returns destination
 */

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

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

	if (!new_dog)
		return (NULL);
	new_dog->age = age;
	new_dog->name = malloc(sizeof(char) * ft_strlen(name));
	if (!new_dog->name)
		return (free(new_dog->name), NULL);
	new_dog->owner = malloc(sizeof(char) * ft_strlen(owner));
	if (!new_dog->owner)
		return (free(new_dog->owner), NULL);
	new_dog->name = ft_strcpy(new_dog->name, name);
	new_dog->owner = ft_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
