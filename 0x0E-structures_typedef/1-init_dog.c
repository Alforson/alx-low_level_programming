#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog variable to initialize
 * @name: Pointer to the name to assign to the dog
 * @age: Age to assign to the dog
 * @owner: Pointer to the owner's name to assign to the dog
 *
 * Description: This function initializes members of the struct dog
 *              pointed to by d with the provided values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Max", 3.5, "John Doe");

	/* Test the initialization */
	printf("Name: %s\n", my_dog.name);
	printf("Age: %.1f\n", my_dog.age);
	printf("Owner: %s\n", my_dog.owner);

	return (0);
}
