#ifndef DOG_STRUCT_H
#define DOG_STRUCT_H
/**
  * struct dog- short description
  * @name: first parameter
  * @age: second parameter
  * @owner: third parameter
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
