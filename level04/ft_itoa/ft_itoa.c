#include <stdio.h>
#include <stdlib.h>
char	*ft_itoa(int nbr)
{
    int len = 0;
    int i = 0;
    int temp = 0;
    int sign = 0;
    char *stringy;
    temp = nbr;
    if (nbr == -2147483648)
    {
        stringy = malloc(sizeof(char) * 12);
        stringy = "-2147483648";
        return (stringy);
    }
    if (nbr < 0)
    {
        nbr *= -1;
        sign = 1;
        len += 1;
        i = 1;
    }
    while (temp / 10)
    {
        len++;
        temp = temp / 10;
    }
    len = len + 1;

    stringy = malloc(sizeof(char) * len);
    stringy[len] = '\0';
    while (len-- > i)
    {
        stringy[len] = nbr % 10 + '0';
        nbr /= 10;
    }
    if (sign == 1)
        stringy[0] = '-';
    return stringy;
}

int main(void)
{   
    printf("%s\n", ft_itoa(-21474));
    return 0;
}
