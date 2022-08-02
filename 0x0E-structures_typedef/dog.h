#ifndef DOG_H
#define DOG_H

/**
 * struct dog -define dog
 * @name:name of dog
 * @age:age dog
 * @owner:owner dog
 * Description:define the struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
