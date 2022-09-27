#include "unistd.h"
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    char *stringy;
    int len = 0;

    while (src[i])
        len++;
    stringy = malloc(sizeof(char) * (len + 1));
    if (!stringy)
        return NULL;
    while (src[i])
        stringy[i] = src[i++];
    stringy[i] = '\0';
    return (stringy);
}
