#ifndef DOG_H
#define DOG_H

/**
* struct dog - struc a new types of data
* @name : name type char *
* @age : age type float
* @owner : owner type char *
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;



int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
