#ifndef DOG_H
#define DOG_H

/**
 * struck dog - defines a new types
 * @name: name of dog
 * @age: age od dog
 * @owner:owner of dog
 * Description: a new type struct dog with the given elements
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void int_dog(struct dog  *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
