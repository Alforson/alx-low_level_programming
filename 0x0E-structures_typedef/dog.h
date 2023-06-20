/**
 * struct dog - Structure representing a dog
 * @name: Pointer to name of dog
 * @age: Age of dog
 * @owner: Pointer to owner's name
 *
 * Description: structure represents a dog with its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* Function prototypes */
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(const dog_t *d);

#endif /* DOG_H */

