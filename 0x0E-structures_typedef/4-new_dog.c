#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog.
 * @name: struct
 * @age: edad
 * @owner: propietario
 * Return: new_dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *mbwa;
int lonName = 0, lonOwner = 0, i = 0;
if (name == NULL || owner == NULL)
return (NULL);
mbwa = malloc(sizeof(struct dog));
if (mbwa == NULL)
return (NULL);
for ( ; name[lonName] != '\0' ; lonName++)
;
for ( ; owner[lonOwner] != '\0' ; lonOwner++)
;
mbwa->name = malloc(sizeof(char) * (lonName + 1));
if (mbwa->name == NULL)
{
free(mbwa);
return (NULL);
}
for (i = 0 ; i < lonName ; i++)
mbwa->name[i] = name[i];

mbwa->name[i] = '\0';

mbwa->age = age;
mbwa->owner = malloc(sizeof(char) * (lonOwner + 1));
if (mbwa->owner == NULL)
{
free(mbwa->name);
free(mbwa);
return (NULL);
}
for (i = 0 ; i < lonOwner ; i++)
mbwa->owner[i] = owner[i];

mbwa->owner[i] = '\0';

return (mbwa);
}
