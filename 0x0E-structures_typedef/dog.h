#ifndef DOG_H
#define DOG_H

/**
 * struct dog-dog data
 *
 * @name:dig name
 *
 * @age:dog age
 * @owner:dog owner
 *
 *
 * Description:longer description
*/

struct dog
{
	char *name;
	float age;
	char *owner;
}

/**
 * dog_t-typedef struct dog
 *
*/

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
