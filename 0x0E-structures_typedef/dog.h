#ifndef DOG_H
#define DOG_H

/**
 * struct dog - header file that contains
 * information about an owner and his/her dog
 * @name: dog name
 * @age: dog age
 * @owner: owners name;
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 *dog_t
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
