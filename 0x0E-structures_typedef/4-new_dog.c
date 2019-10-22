#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void *countandreplace(char *str)
{
	int i;
	char *p;
	for(i = 0; str[i] != '\0'; i++)
		;
	p = malloc(i + 1);
	if (p == NULL)
		return (NULL);
	for(i = 0; str[i] != '\0'; i++)
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
	if (copyname == NULL)
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
