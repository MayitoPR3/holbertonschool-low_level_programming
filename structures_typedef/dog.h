#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <string.h>
/**
 * struct dog - information about the dog
 * @name: dog name
 * @age: dog age
 * @owner: name of the owner
 * Return: Always 0
 */
typedef struct dog dog_t
{
char *name;
float age;
char *owner;
}
dog;
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

