#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * countandreplace - Count and save a string in a malloc.
 * @str: My string.
 * Return: New pointer of malloc.
 */
void *countandreplace(char *str)
{
	int i;
	char *p;

	for (i = 0; str[i] != '\0'; i++)
		;
	p = malloc(i + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}
/**
 * new_dog - Create a copy of my structure.
 * @name: Name of my dog
 * @age: Age of my dog
 * @owner: Owner of my dog
 * Return: New pointer.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *copyname, *copyowner;
	dog_t *dog_m;

	dog_m = malloc(sizeof(dog_t));
	if (dog_m == NULL)
		return (NULL);
	copyname = countandreplace(name);
	if (copyname == NULL)
	{
		free(dog_m);
		return (NULL);
		}
	copyowner = countandreplace(owner);
	if (copyowner == NULL)
	{
		free(dog_m);
		free(copyname);
		return (NULL);
		}
	dog_m->name = copyname;
	dog_m->age = age;
	dog_m->owner = copyowner;
	return (dog_m);
}
