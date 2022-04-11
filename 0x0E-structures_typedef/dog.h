#ifndef DOG_H
#define DOG_H
/**
 *struct dog - a structure that creates variables used in the main function
 *which is also accessed in the main function
 *@name: A pointer pointing to a string
 *@age: A float that takes in an a number
 *@owner: A pointer variable that points to a string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
