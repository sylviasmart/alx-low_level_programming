#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Dog owner's name
 *
 * Destription: A comprehension of a Dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - Typedef for dog structure
*/
typedef struct dog dog_t;

char *_strdup(char *str);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
