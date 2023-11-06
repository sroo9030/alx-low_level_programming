#ifndef DOG_H
#define DOG_H

/**
  * struct dog - new type struct dog data
  * @name: the dog name
  * @age: the dog age
  * @owner: the name of the owner of the dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/*Functions Prototype*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
