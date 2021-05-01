#include<stdio.h>
#define LIMIT 100

/* even though I don't like gotos, I was a bit lazy to 
deal with recursion. Pull requests are welcomed. */

int main(void)
{
    int i, k;
    printf("printing primes up to %d:\n\n", LIMIT);
    for (i = 2; i < LIMIT+1; i++)
    {
        for (k = 2; k < i; k++) 
        {
            if (i % k == 0) goto jump;
        }
        printf(" %d\n",i);
        jump: ;
    }
    return 0;
}