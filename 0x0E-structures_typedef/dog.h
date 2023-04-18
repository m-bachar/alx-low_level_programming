#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
  * struct dog - struct named dog
  * @name: element of struct dog type char *
  * @age: element of struct dog type float
  * @owner: element of struct dog type char *
  */

typedef struct dog
{
	char	*name;
	float	age;
	char	*owner;
}	t_dog;

void	init_dog(struct dog *d, char *name, float age, char *owner);
void	print_dog(struct dog *d);

#endif
