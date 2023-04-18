#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
  * struct dog - struct named dog
  * @name: element of struct dog type char *
  * @age: element of struct dog type float
  * @owner: element of struct dog type char *
  */

struct	dog
{
	char	*name;
	float	age;
	char	*owner;
};

typedef struct dog	dog_t;

void	init_dog(struct dog *d, char *name, float age, char *owner);
void	print_dog(struct dog *d);

#endif
