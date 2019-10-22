#ifndef DOG
#define DOG
/**
 * struct dog - My doggie
 * @name: Name
 * @age: age
 * @owner: owner
 *
 * Description: The characteristics of my dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
