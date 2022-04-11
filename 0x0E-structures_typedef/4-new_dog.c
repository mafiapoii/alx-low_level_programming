#include "dog.h"
#include <stdlib.h>
/**
 *_strncpy - a function that copies a string
 *@dest: a variable that holds the string that needs to be added to.
 *@src: a variable that holds a string where we are coping it over to
 *the dest variable.
 *@n: a variable that represents how many bytes are copied over.
 *Return: The final string is returned.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


/**
 *new_dog - creating a new dog
 *@name: Name of the dog
 *@age: a float value
 *@owner: a pointer that points to a string
 *Return: The name, age, and owner is returned
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int i, a;
	char *temp;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	temp = name;
	for (i = 0; *temp != '\0'; i++, temp++)
		;
<<<<<<< HEAD
	doggy->name = malloc(sizeof(char) * i);
	if (doggy->name == NULL || i == 0)
		return (NULL);
	for (a = 0; a < i; a++)
		doggy->name[a] = name[a];
	doggy->name[a] = '\0';
=======
	if (i == 0 || name == NULL)
		return (NULL);
	doggy->name = malloc(sizeof(char) * (i + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	_strncpy(doggy->name, name, (i + 1));
>>>>>>> b7186a6851d0a6b06ff897dc42866d7fe2552011
	doggy->age = age;
	temp = owner;
	for (i = 0; *temp != '\0'; i++, temp++)
		;
<<<<<<< HEAD
	doggy->owner = malloc(sizeof(char) * i);
	if (doggy->owner == NULL || i == 0)
		return (NULL);
	for (a = 0; a < i; a++)
		doggy->owner[a] = owner[a];
	doggy->owner[a] = '\0';
=======
	if (i == 0 || owner == NULL)
		return (NULL);
	doggy->owner = malloc(sizeof(char) * (i + 1));
>>>>>>> b7186a6851d0a6b06ff897dc42866d7fe2552011
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
<<<<<<< HEAD
=======
	}
	_strncpy(doggy->owner, owner, (i + 1));
>>>>>>> b7186a6851d0a6b06ff897dc42866d7fe2552011
	return (doggy);
}
