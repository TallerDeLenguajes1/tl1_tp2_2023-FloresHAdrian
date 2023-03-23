#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 7

int main()
{
    int i;
    int mt[N][M], *puntero;
    puntero = &mt[0][0];
    for (i = 0; i < N*M; i++)
    {
      
            *puntero = 1 + rand() % 100;
            printf( "%d", *puntero);
            puntero++;
        printf("\n");
    }
}