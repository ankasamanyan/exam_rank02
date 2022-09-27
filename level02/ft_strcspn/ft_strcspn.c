#include "unistd.h"
// #include <string.h> 
// #include "stdio.h"

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;

    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if ( reject[j] == s[i])
                return i;
            j++;
        }
        i++;
    }
    j = 0;
    while (s[j])
        j++;
    return j;
}
// int main(void)
// {
//     /* code */
//     return (printf("%zu",strcspn("Halp God", "pzz")));
// }
