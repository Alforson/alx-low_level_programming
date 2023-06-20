#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with the provided information
 * @name: Pointer to the name of the new dog
 * @age: Age of the new dog
 * @owner: Pointer to the owner's name of the new dog
 *
 * Return: Pointer to the newly created dog (struct dog)
 *         NULL if the function fails
 *
 * Description: This function creates a new dog with the provided
 *              information and returns a pointer to it.
 *              It stores copies of the name and owner strings.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *name_copy, *owner_copy;
	int name_length, owner_length;

	/* Calculate lengths of name and owner strings */
	name_length = strlen(name);
	owner_length = strlen(owner);

	/* Allocate memory for the new dog struct */
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	/* Allocate memory for the name and owner copies */
	name_copy = malloc((name_length + 1) * sizeof(char));
	if (name_copy == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	owner_copy = malloc((owner_length + 1) * sizeof(char));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog_ptr);
		return (NULL);
	}

	/* Copy the name and owner strings to the copies */
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	/* Assign the copied strings to the new dog struct */
	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}

int main(void)
{
	dog_t *my_dog = new_dog("Max", 3.5, "John Doe");

	if (my_dog != NULL)
	{
		printf("Name: %s\n", my_dog->name);
		printf("Age: %.1f\n", my_dog->age);
		printf("Owner: %s\n", my_dog->owner);
	}
	else
	{
		printf("Failed to create a new dog.\n");
	}

	return (0);
}
