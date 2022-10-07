 #include <stdlib.h>
 #include <stdio.h>

 int main (int argc, char **argv)
 {
    if (argc != 3)
        return(printf("\n"));
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int i = 1;
    int smoll;
    if (a < b)
        smoll = a;
    else
        smoll = b;
    while(1)
    {
        if((a % (smoll / i) == 0) && (b % (smoll / i) == 0))
           return( printf("%i\n",(smoll / i)));
        i++;
    }
 }
 