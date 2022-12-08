#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - Function that initialize a variable of type struct dog.
  * @d: Variable to be initialized
  * @name: name member of variable
  * @age: age member of variable
  * @owner: owner member of variable
  *
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
