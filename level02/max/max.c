// #include <stdio.h>
int		max(int* tab, unsigned int len)
{
    unsigned int i = 0;
   unsigned  int j = 0;
    unsigned int swap = 0;
    while (i < len)
    {
        j = i + 1;
        while (j < len)
        {
            if (tab[i] > tab[j])
            {
                swap = tab[i];
                tab[i] = tab[j];
                tab[j] = swap;
            }
            j++;
        }
        i++;
    }
    return (tab[len - 1]);
}

// int main(void)
// {
//     int arr[10] = { 1, 2, 3, 64, 5, 6, 15, 8, 9, 10};
//     int maxx = max(arr, 10);
//     printf("%i\n",maxx);
//     return 0;
// }
