#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @o: struct dog to free
 */
void free_dog(dog_t *d)
{
if (o)
{
free(o->name);
free(o->owner);
free(o);
}
}
